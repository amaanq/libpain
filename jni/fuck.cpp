#include "fuck.h"

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "fuck", __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, "fuck", __VA_ARGS__))
#define LOGE(...) ((void)__android_log_print(ANDROID_LOG_ERROR, "fuck", __VA_ARGS__))

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <iostream>
#include <string>
#include <sys/epoll.h>

extern "C"
{
    int echo_hi()
    {
        LOGI("Hello from libfuck!");
        return 0;
    }

    int fuck::init()
    {
        LOGI("Init called!");
        // setup something, like maybe connecting to a proxy server :)
        // connect(my_server...) yeah yeah you get it
        return 0;
    }

    int fuck::load()
    {
        LOGI("Loading libfuck! Let's inject some code!");
        // do whatever, we're hooking this right? 🙃
        return 0;
    }
}