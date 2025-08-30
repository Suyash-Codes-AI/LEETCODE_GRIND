class LRUCache {
public:
    class Node{
        public:
            int key,val;
            Node* prev;
            Node* next;

            Node(int k, int v){
                key = k;
                val = v;
                prev = next = NULL;
            }
    };
    Node* head = new Node(-1,-1);
    Node*tail =new Node(-1,-1);
    unordered_map<int,Node> 


    LRUCache(int capacity) {
        
    }
    
    int get(int key) {
        
    }
    
    void put(int key, int value) {
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
