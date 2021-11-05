class _CORE_ {
    
    fun start(work_to_do: Int) {
        
        
        
    };
    
    fun operating_system_security(security_encryption_algorithm: Int) {
        
        
        
    };
    
    fun internet(socket_to_use: Int, command: ByteArray) {
        
        if (socket_to_use == 0) {
            
            if (command[0 : 2] == "SND") {
                
                _INTERNET_.client.send(command[4 : (command.size - 1)]);
                
            };
            if (command[0 : 2] == "RCV") {
                
                _INTERNET_.received_datas.append(_INTERNET_.client.recv());
                
            };
            
        };
        if (socket_to_use == 1) {
            
            
            
        };
        
    };
    
}
