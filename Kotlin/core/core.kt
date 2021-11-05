class _CORE_ {
    
    fun start(work_to_do: UInt) {
        
        
        
    };
    
    fun operating_system_security(security_encryption_algorithm: UInt) {
        
        
        
    };
    
    fun gui(datas: UByteArray) {
        
        
        
    };
    fun internet(socket_to_use: UByte, socket_number : UInt, datas: String) {
        
        if (socket_to_use == 0) {
            
            if (datas[0 : 2] == "SND") {
                
                if (core_datas["internet"["client_crashed"]] == 0) {
                    
                    _INTERNET_.client.send(datas[4 : (datas.size - 1)]);
                    core_datas["internet"["client_packets_received"]] += 1;
                    
                } else {
                    
                    _BACKUP_INTERNET_.client.send(datas[4 : (datas.size - 1)]);
                    core_datas["internet"["backup_client_packets_received"]] += 1;
                    
                };
                
            };
            if (datas[0 : 2] == "RCV") {
                
                if (core_datas["internet"["client_crashed"]] == 0) {
                    
                    _INTERNET_.received_datas.append(_INTERNET_.client.recv());
                    core_datas["internet"["client_packets_received"]] += 1;
                    
                } else {
                    
                    core_datas["internet"["backup_client_received_datas"]];
                    core_datas["internet"["backup_client_packets_received"]] += 1;
                    
                };
                
            };
            
        };
        if (socket_to_use == 1) {
            
            if (datas[0 : 2] == "SND") {
                
                if (core_datas["internet"["server_crashed"]] == 0) {
                    
                    _INTERNET_.server.send(datas[4 : (datas.size - 1)]);
                    core_datas["internet"["server_packets_sent"]] += 1;
                    
                } else {
                    
                    _BACKUP_INTERNET_.server.send(datas[4 : (datas.size - 1)]);
                    core_datas["internet"["backup_server_packets_sent"]] += 1;
                    
                };
                
            };
            if (datas[0 : 2] == "RCV") {
                
                if (core_datas["internet"["server_crashed"]] == 0) {
                    
                    _INTERNET_.received_datas.append(_INTERNET_.server.recv());
                    core_datas["internet"["server_packets_received"]] += 1;
                    
                } else {
                    
                    core_datas["internet"["backup_packets"]].append(_BACKUP_SERVER_.server.recv());
                    core_datas["internet"["backup_server_packets_received"]] += 1;
                    
                };
                
            };
            
        };
        
    };
    
}
