//
// Created by limenghua on 18-2-28.
//

#include <boost/asio.hpp>

#include <iostream>
#include <pplx/pplxtasks.h>
#include <cpprest/http_listener.h>
#include <thread>

using namespace boost::asio;
using boost::asio::ip::tcp;
using namespace web;
using namespace http;
using namespace http::experimental::listener;

using namespace pplx;


int main()
{
    std::cout<<"hello"<<std::endl;

    http_listener listener("http://127.0.0.1:3000");

    listener.support([](http_request message){
        auto response = json::value::object();
        response["version"] = json::value::string("0.1.1");
        response["status"] = json::value::string("ready!");
        message.reply(status_codes::OK, response);
    });

    listener.open().get();

    std::cin.get();

    listener.close().get();


    return 0;
}
