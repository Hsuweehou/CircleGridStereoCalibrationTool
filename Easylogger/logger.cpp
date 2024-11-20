//logger.cpp
 
#include "logger.h"
 
//easyloggingpp初始化宏
INITIALIZE_EASYLOGGINGPP
 
Logger::Logger()
{   char outBuffer[1024];
    memset(outBuffer, '\0', sizeof(outBuffer));
    const char *cmd_str = "pwd";
    FILE *pipeLine = popen(cmd_str, "r");
    if (!pipeLine) {
        perror("Fail to popen\n");
        //LOG(ERROR) << "Fail to popen";
    }
    fgets(outBuffer, 512, pipeLine);
    pclose(pipeLine);
    std::string srcP = outBuffer;

    //去除所有空格
    auto itor = remove_if(srcP.begin(), srcP.end(), ::isspace);
    srcP.erase(itor, srcP.end());
    std::string srcPandlogconfig = srcP + "/log.conf";
    el::Configurations conf(srcPandlogconfig);
    el::Loggers::reconfigureAllLoggers(conf);
}
 
Logger *Logger::instance()
{
    static Logger ins;
    return &ins;
}
