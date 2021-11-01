import string

import "./internet.py"

class main :
    
    def init(self, maximumNodes, minimumNodeFees) :
        
        self.clients = 0
        self.mxNods = maximumNodes
        self.minNodFees = minimumNodeFees
        self.nodes = []
