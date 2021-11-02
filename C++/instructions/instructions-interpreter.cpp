#include "instructions-interpreter.hpp"

#include "../internet/internet.cpp"
#include "../wallet/wallet.cpp"

namespace INSTRUCTIONS_INTERPRETER {
    
    int FUNC(int type, int funcName, int datas) {
        
        if (type == 1) {
            
            int funcName = datas;
            
        };
        
    };
    int IF(int datas1, int condition, int datas2, int result) {
        
        if (datas1 condition datas2) {
            
            result;
            
        };
        
    };
    int RIF(int datas1, int condition, int datas2, int result) {
        
        if (datas1 condition datas2) {
            
            return (result);
            
        };
        
    };
    int IFELSE(int datas1, int condition, int datas2, int result1, int result2) {
        
        if (datas1 condition datas2) {
            
            result1;
            
        } else {
            
            result2;
            
        }
        
    };
    int RIFELSE(int datas1, int condition, int datas2, int result1, int result2) {
        
        if (datas1 condition datas2) {
            
            return (result1)
            
        } else {
            
            result2
            
        };
        
    };
    int RRIFELSE(int datas1, int condition, int datas2, int result1, int result2) {
        
        if (datas1 condition datas2) {
            
            return (result1)
            
        } else {
            
            return (result2)
            
        };
        
    }
    int FOR(int datas1, int condition, int datas2, int result) {
        
        for(datas1 condition datas2) {
            
            result
            
        };
        
    };
    int RFOR(int datas1, int condition, int datas2, int result) {
        
        for (datas1 condition datas2) {
            
            return (result);
            
        };
        
    };
    
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
    
    
    int CALC(int datas1, int cal, int datas2) {
        
        return (datas1 cal datas2)
        
    };
    
    int ADD(int datas1, int datas2) {
        
        return (datas1 + datas2)
        
    };
    int REMV(int datas1, int datas2) {
        
        return (datas1 - datas2)
        
    };
    int MULTIP(int datas1, int datas2) {
        
        return (datas1 * datas2)
        
    };
    int DIVD(int datas1, int datas2) {
        
        return (datas1 / datas2)
        
    };
    int EXPO(int datas1, int datas2) {
        
        return (datas1 ^ datas2)
        
    };
    
}
