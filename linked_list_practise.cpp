#include<bits/stdc++.h>
#define int         int64_t
#define pb          push_back
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
    node *head, *tail;
    int size;
public:
	linked_list(){
		head  = NULL;
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
    			cout<<" -->";
    		}
    		temp = temp->next;

    	}
        
    }
    void push_back(int val){
    	node *temp = new node;
    	temp->data = val;
    	temp->next = NULL;
    	if(head == NULL){
    		head = tail = temp;
    		
    	}
    	else {
    		tail->next = temp;
    		tail = temp;
    	}
    	size++;
    }
    int get_size(){
    	return size;
    }
    void push_front(int val){
    	node *temp = new node;
    	temp->data = val;
    	temp->next = NULL;
    	if(head == NULL){
    		head = tail = temp;
    	}
    	else{
    		temp->next = head;
    		head = temp;
    	}
    	size++;
    }
    void insert(int index , int val){
    	if(index < 0 || index > size) cout<<"Index out of bound"<<endl;

    	else if(index == 0) push_front(val);
    	else if(index == size) push_back(val);
    	else{
    		node *temp = new node;
    		temp->data = val;
    		temp->next = NULL;
            node *prev = head;
    		for(int i=0;i<index-1;i++, prev = prev->next);
    		temp->next = prev->next;
    		prev->next = temp;	
    		size++;
    	}

    }
    void delete_kth(int index){
    	if(index < 0 || index >=size) cout<<"Index out of range"<<endl;
    	node *prev,*temp = head;
    	if(index == 0) {
            head = head-> next;
            free(temp);
            size--;
            return;
    	} 
    	for(int i=0;i<index;i++){
    		prev = temp;
    		temp = temp->next;
    	}
    	prev->next = temp->next;
    	free(temp);
    	size--;
    	if(index == size-1) {
    		prev = tail;
    	}


    }
    void print_kth(int index){
    	if(index < 0 || index >=size){
    		cout<<"Index not valid"<<endl;
    		return;
    	}
    	node *temp  = head;
    	for(int i=0 ;i<index ;i++, temp = temp->next);
        cout<<temp->data<<endl;		

    }
    void print_recursive(node *temp){
    	if(temp ==NULL){
    		head = temp;
    		return;
    	}
    	cout<<temp->data<<" ";
    	print_recursive(temp->next);
    }
 
    void reverse(node *temp){
    	if(temp->next == NULL){
    		head = temp;
    	    return;
    	}
    	reverse(temp->next);
    	node *nxt = temp->next;
    	nxt->next = temp;
    	temp->next = NULL;
    	tail = temp;
    }

    node* get_head(){
    	return head;
    }
      
};
void solve(){
	linked_list a;
	a.push_back(5);
	a.push_back(100);
    a.push_back(-10);
    a.push_front(200);
    a.push_front(-19);
    a.insert(1,50);
    a.insert(0,-20);
    a.insert(7,290);
    a.delete_kth(0);
    a.delete_kth(5);
    a.print();
    a.print_kth(1);
    a.print_kth(20);
    cout<<a.get_size()<<endl;
    a.print_recursive(a.get_head());
    // a.reverse(a.get_head());
    // a.print_recursive(a.get_head());
    // a.reverse(a.get_head());
    // a.print();

    
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