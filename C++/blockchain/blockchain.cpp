#include <string>

#include "../algorithms/algorithms.cpp"
#include "../internet/internet.cpp"
#include "../wallet/wallet.cpp"

namespace blockchain {
    
    uint blocks_before_valid_block = 10;
    uint chain_size = 0;
    string unvalid_blocks = [];
    
    int create_chain(int starting_with_blocks, string blocks, int minimum_fees) {
        
        if (starting_with_blocks == 1) {
            
            chain_size = blocks.size();
            if (blocks.size < blocks_before_valid_block) {
                
                for (blocks.size != 0) {
                    
                    unvalid_blocks.append(blocks[0]);
                    blocks.remove(0);
                    
                };
                
            } else {
                
                
                
            };
            
        } else {
            
            
            
        }
        
    };
    int verify_chain(int number) {
        
        
        
    };
    
    int create_block(string previous_block_hash, string fees, string block_message) {
        
        string block = "{'prevhash'" +previous_block_hash +"}";
        
        if (unvalid_blocks.size() < blocks_before_valid_block) {
            
            uint block_good = 0;
            
            block_good = verify_block(block);
            unvalid_blocks.append(block);
            
        } else {
            
            valid_blocks.append(unvalid_blocks[0]);
            unvalid_blocks.append(block);
            
        };
        
    };
    int verify_block(string hash) {
        
        
        
    };
    
    int create_nfc_transaction(string previous_tx_hash, string from, string to, string fees) {
        
        
        
    };
    int verify_nfc_transaction(hash) {
        
        
        
    };
    
};
