/*
 * @Author: fannanqi 1773252187@qq.com
 * @Date: 2024-03-04 08:01:42
 * @LastEditors: fannanqi 1773252187@qq.com
 * @LastEditTime: 2024-03-04 08:27:03
 * @FilePath: /liblog/test/testlog.cc
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <logger.h>

#include <errno.h>

int main(void)
{
    // int errno = 0;
    LOG_INFO("this is log test!,error=%s ", strerror(errno));
    LOG_FATAL("test FATAL!,error=%s ", strerror(errno));
    LOG_DEBUG("test LOG_DEBUG!,error=%s ", strerror(errno));
    return 0;
}