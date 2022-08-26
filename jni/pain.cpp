#include "pain.h"

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "pain", __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, "pain", __VA_ARGS__))
#define LOGE(...) ((void)__android_log_print(ANDROID_LOG_ERROR, "pain", __VA_ARGS__))

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
        LOGI("Hello from libpain!");
        return 0;
    }

    int pain::init()
    {
        LOGI("Init called!");
        // setup something, like maybe connecting to a proxy server :)
        // connect(my_server...) yeah yeah you get it
        return 0;
    }

    int pain::load()
    {
        LOGI("Loading libpain! Let's inject some code!");
        // do whatever, we're hooking this right? 🙃
        return 0;
    }
}