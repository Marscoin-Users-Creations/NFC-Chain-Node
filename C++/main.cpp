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
        INTERNET.internetClient.connect(DATABASE["peers"[0 : CONFIG["client"["maxPeers"]]]])
        INTERNET.internetClient.send("sync_chain")
        BLOCKCHAIN.blocks = INTERNET.internetClient.recv()
        BLOCKCHAIN.verified_chain = BLOCKCHAIN.verify_chain(BLOCKCHAIN.blocks)
        
    }
    
}
