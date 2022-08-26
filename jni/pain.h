#pragma once

#include <jni.h>
#include <errno.h>

#include <string.h>
#include <unistd.h>
#include <sys/resource.h>

#include <android/log.h>

class pain
{
public:
    static int load();
    static int init();
    pain();
    ~pain();
};