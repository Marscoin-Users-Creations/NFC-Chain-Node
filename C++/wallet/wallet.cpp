#include <string>

#include "../logs/logs.json"

namespace wallet {
    
    int encrypt_wallet(string password, string file_directory) {
        
        
        
    };
    int decrypt_wallet(string password) {
        
        
        
    };
    
    int create_private_key(int keyType) {
        
        int numbers = [];
        LOGS["wallet"].append("Created a new private key ( type " +private_key_type " )")
        
    };
    int create_public_key(int keyType, string private_key_hex) {
        
        LOGS["wallet"].append("Created a new public key ( type " +keyType +" ) " +finished_public_key +" from the private key " +private_key_hex[0:1] +"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx")
        
    };
    
    int verify_private_key(string public_key) {
        
        LOGS["wallet"].append("")
        
    };
    int verify_public_key(string private_key) {
        
        string verified_public_key = "";
        LOGS["wallet"].append("Verified the public key : " +verified_public_key);
        
    };
    
}
