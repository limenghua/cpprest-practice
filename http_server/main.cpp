//
// Created by limenghua on 18-2-28.
//

#include <iostream>
#include <cpprest/http_listener.h>

using namespace web;
using namespace http;
using namespace http::experimental::listener;

int main()
{
    http_listener listener("http://127.0.0.1:3001");

    listener.support([](http_request message){
        message.reply(status_codes::OK,"hello world");
    });

    listener.open().get();

    std::cin.get();

    listener.close().get();

    return 0;
}
