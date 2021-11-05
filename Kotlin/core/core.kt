class _CORE_ {
    
    fun start(work_to_do: Int) {
        
        
        
    };
    
    fun operating_system_security(security_encryption_algorithm: Int) {
        
        
        
    };
    
    fun gui(datas: UByteArray) {
        
        
        
    };
    fun internet(socket_to_use: UByte, socket_number : UInt, datas: String) {
        
        if (socket_to_use == 0) {
            
            if (datas[0 : 2] == "SND") {
                
                _INTERNET_.client.send(datas[4 : (datas.size - 1)]);
                
            };
            if (datas[0 : 2] == "RCV") {
                
                _INTERNET_.received_datas.append(_INTERNET_.client.recv());
                
            };
            
        };
        if (socket_to_use == 1) {
            
            if (datas[0 : 2] == "SND") {
                
                if (core_datas["internet"["server_crashed"]] == 0) {
                    
                    
                    
                };
                
            };
            
        };
        
    };
    
}
