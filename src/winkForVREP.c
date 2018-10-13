#include <stdio.h>
#include "extApi.h"
#include "extApiPlatform.h"

enum bool {false, true};

char remoteClient(int clientID);




int main(){
    int portNb=19999;
    char remoteClientExitStatus;

    int clientID=simxStart((simxChar*)"127.0.0.1",portNb,true,true,5000,5);
    if (clientID!=-1){
        printf("Connection to remote API server successful\n");
        remoteClientExitStatus = remoteClient(clientID);
        if(remoteClientExitStatus == 1){
            printf("Connection to simulation stoped, shuting down.\n");
        }
    }
    else{
        printf("Connection failed!\nShutting down!\n");
    }
    return 0;
}


char remoteClient(int clientID){
    while(simxGetConnectionId(clientID) != -1){

    }
    return 1;
}
