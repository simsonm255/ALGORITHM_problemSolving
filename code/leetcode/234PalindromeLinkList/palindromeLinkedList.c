struct ListNode {
      int val;
      struct ListNode *next;
};

typedef ListNode *Node
Node *stack;
Node *head=NULL,Node *tail=NULL;

void insert(Node *n){
    if(head==NULL){
        head=tail=stack->val;
        head->next=tail;        
    }else {
        Node *t = (Node*)malloc(sizeof(Node));
        t->val = n->val;
        t->next = head;
        head=t;
    }
}

bool isPalindrome(struct ListNode* head){
    struct ListNode *t = head;
    
    while( )
}

void main(){
    struct ListNode *n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    
}