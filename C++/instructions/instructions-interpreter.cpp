#include "instructions-interpreter.hpp"

namespace INSTRUCTIONS_INTERPRETER {
    
    int FUNC(int datas) = new int;
    int IF(int datas, int datas2) = if(datas) { datas2 };
    int FOR(int datas1, int calcul, int datas2, int result) = for(datas1 calcul datas2) { result };
    int ELSE(int datas) = else { datas };
    int THEN = {"{"};
    int END = {"}"};
    int SMCOL = ";";
    
    int DEL(int funcName) 
        
        funcName.delete();
        
    };
    
    int CNCT(int serverAddress) {
        
        internet.internetClient.connect(serverAddress);
        
    };
    int RECV(int fromServer) {
        
        return (internet.internetClient.recv(fromServer));
        
    };
    int SEND(int toClient, datas) {
        
        internet.internetServer.send(toClient, datas);
        
    };
    int DWLD(int fromServers, datas) {
        
        internet.internetClient.send(fromServers, datas)
        
    };
    
}
