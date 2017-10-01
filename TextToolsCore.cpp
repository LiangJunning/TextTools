#include <string>
#include <stdlib.h>
#include "TextToolsCore.h"

//using namespace std;

int twoendappend(const char* start,const char* end,const char* source,char* des)
{
    int dlen;

    dlen=strlen(start)+strlen(end)+strlen(source)+1;
    des=(char*)malloc(dlen*sizeof(char));
    memset(des,0,dlen*sizeof(char));
    sprintf(des,"%s%s%s",start,source,end);
    return dlen;
}
