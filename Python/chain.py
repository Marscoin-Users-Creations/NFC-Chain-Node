class nfcChain :
    
    def create_block(self, previousBlockHash, transactions, fees) :
        
        self.prevBlkHash = previousBlockHash
        self.verifiedsTxs = verifyTransactions(transactions)
        self.txs = self.verifiedTransactions["txs"]
        self.fees = self.verifiedTransactions["fees"]
        
    def create_transaction(self, previousTransactionHash, from, to, message, fees) :
        
        self.prevtxhash = previousTransactionHash
        self.frm = from
        self.to = to
        self.msg = message
        self.fees = fees
