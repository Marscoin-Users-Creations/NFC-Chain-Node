#include <std>
#include <string>

#include "./blockchain/blockchain.cpp"
#include "./configs/config.json"
#include "./gui/gui.cpp"
#include "./internet/internet.cpp"
#include "./wallet/wallet.cpp"

namespace main {
    
    int INIT() {
        
        INTERNET.internetServer.listen(CONFIG["server"["ip"]], CONFIG["server"["port"]])
        
    }
    
}
