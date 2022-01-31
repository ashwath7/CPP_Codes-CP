#include<bits/stdc++.h>
// #define int         int64_t
// #define pb          push_back
#define endl        '\n'
#define pll         pair<int,int>
#define vll          vector<int>
#define all(a)      (a).begin(),(a).end()
#define x           first
#define y           second
#define sz(x)       (int)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mi        map<int,int>
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define ios     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
struct node {
	int data;
	node *next;
};
class linked_list{
private:
	node *head,*tail;
	int size;

    node* get_node(int val){
        node *temp = new node;
        temp->data = val;
        temp->next = NULL;
        return temp;
    }
public:
    //   node* get_node(int val){
    //     node *temp = new node;
    //     temp->data = val;
    //     temp->next = NULL;
    //     return temp;
    // }
    linked_list(){   // constructor, when ever the function is called automatically the variables get initialised.
     	head = NULL;
     	tail = NULL;
     	size = 0;
     }
    void print(){
    	node *temp = head;

    	while(temp != NULL){
    		cout<<temp->data;
    		if(temp->next == NULL){
    			cout<<endl;
    		}
    		else {
    			cout<<"-->";
    		}
    		temp = temp->next;
    	}
    } 
    void push_back(int val){
    	// if initially the linked list is empty.
    	// node *temp = new node;
    	// temp->data = val;
    	// temp->next  = NULL;
        node *temp = get_node(val);
    	if(head == NULL){
    		head = tail = temp;
    	}
    	else {
    		// if alreday elements are there we need to insert it.
    		tail->next = temp;
    		tail = temp; // tail->next; 
    	}
    	size++;
    }
    int get_size(){
    	return size;
    }
    void push_front(int val){
        node *temp = get_node(val);
        if(head == NULL){
            head = tail = temp;
        }
        else {
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insert(int index,int val){
        if(index < 0 || index > size) cout<<"Index out of range"<<endl;
        else if(index==0) push_front(val);
        else if(index == size) push_back(val);
        else {
            // at specific position.
            node *new_node = get_node(val);
            node *prev = head;
            for(int i=0;i<index-1;i++,prev = prev->next);
            new_node->next = prev->next;
            prev->next = new_node;
            size++;    
        }
    }
    void print_kth(int index){
        if(index < 0 || index > size) cout<<"Index not valid"<<endl;

        else {
            node *temp = head;
            for(int i=0;i<index;i++ , temp = temp->next);
            cout<<temp->data<<endl;   
       }  
    }
    void delete_kth(int index){
        if(index < 0 || index >=size) {
            cout<<"Index out of bound"<<endl;
            return;
        }    
        node *prev,*cur = head;
        if(index == 0){
            head = head->next;
            free(cur);
            size--;
            return;
        }
     
        for(int i=0;i<index;i++){
            prev = cur;
            cur = cur->next;
        }
        prev->next = cur->next;
        free(cur);
        size--;
        if(index==size-1){
            prev = tail;
        }
    }
    void PrintRecursive(node *head){
        if(head == NULL){
            cout<<endl;
            return;
        }
        cout<<head->data<<" ";
        PrintRecursive(head->next);
    }
    node* get_head(){
        return head;
    }
    void Print_reverse(node *head){
        if(head == NULL){
            cout<<endl;
            return;
        }
        Print_reverse(head->next);
        cout<<head->data<<" ";
    }
    void reverse(node *temp){
        if(temp->next == NULL){
            // temp is the last elemnt.
            head = temp;
            return;
        }
        reverse(temp->next);

        node *nxt = temp->next;
        nxt->next = temp;
        temp->next = NULL;
        tail = temp;

        // tail->next = temp;
        // temp->next = NULL;
        // tail = temp;;      
    }

    
 
};
void solve(){
    linked_list a;
    a.push_back(5);
    a.push_back(100);
    a.push_back(-10);
    a.push_front(1000);
    a.insert(2,234);
    a.insert(0,12);
    a.insert(6,200);
    a.insert(20,40);
    a.insert(3,212);
    a.print_kth(1);
    a.delete_kth(1);
    a.delete_kth(6);
    a.print();
    a.insert_recursive(a.get_head(),2,200,6);
    a.print();
    // cout<<a.get_size()<<endl;
    // cout<<"Printing recursively"<<endl;
    // a.PrintRecursive(a.get_head());
    // cout<<"Reversing a linked list"<<endl;
    // a.Print_reverse(a.get_head());
    // a.reverse(a.get_head());
    // cout<<endl;
    // a.PrintRecursive(a.get_head());
}
signed main(){
    ios
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("display.txt", "w", stdout);
    #endif 
        
    int test=1;
    //cin>>test;
    while(test--){
        solve();
    }    
    return 0;
}