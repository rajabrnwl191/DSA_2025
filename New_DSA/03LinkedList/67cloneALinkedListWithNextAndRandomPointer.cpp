Node *copyList(Node *head) {
        Node *temp1=head,*temp2=head;
        unordered_map<int,Node*>dtmp;
        Node* cpy=new Node(0);
        Node* ans=cpy;
        while(temp2!=NULL){
            int d=temp2->data;
            Node *newNode=new Node(d);
            cpy->next=newNode;
            dtmp[d]=newNode;
            cpy=cpy->next;
            temp2=temp2->next;
        }
        Node*temp=ans->next;
        while(temp1!=NULL&&temp!=NULL){
            int d=temp1->data;
            Node *rdm=temp1->random;
            if(rdm==NULL){
                temp->random=NULL;
            }else{
                temp->random=dtmp[rdm->data];
            }
            temp1=temp1->next;
            temp=temp->next;
        }
        return ans->next;
    }