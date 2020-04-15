#include <bits/stdc++.h>
using namespace std;
# define fills(x,y) memset(x,y,sizeof x)
# define ALL(v) (v).begin(), (v).end()
# define SZ(x) ((int)(x).size)
# define pb push_back
# define INF (int)1e9
# define EPS 1e-9
# define rep(i,n) for(int i=0;i<n;++i)
# define REP(i,k,n) for(int i=k;i<=n;++i)
# define mod 1000000007

typedef long long ll;
typedef pair<ll, ll> Pll;
typedef vector<ll> Vl;
typedef vector<Vl> VVl;
typedef vector<string> VS;
typedef vector<Pll> Vll;
typedef map<ll,ll> Mll;
typedef set<ll> SETl;

typedef struct s_node
{
	int data;
	struct s_node *right;
	struct s_node *left;
}				t_node;

t_node *create_node(int data)
{
	t_node *node = (t_node*)malloc(sizeof(t_node));
	node -> data = data;
	node -> right = NULL;
	node -> left = NULL;
	return node;
}

void	print_node(t_node *node)
{
	if (!node) return ;
	print_node(node -> left);
	cout << node -> data << endl;
	print_node(node -> right);
}

bool	is_sym(t_node *node)
{
	if (!node) return true;
	queue<t_node *> q;
    q.push(node -> left);
    q.push(node -> right);
    while (!q.empty())
    {   
        t_node *node_a = q.front();
		q.pop();
        t_node *node_b = q.front();
		q.pop();

        if (!node_a && !node_b) continue;
        if (!node_a || !node_b) return false;
        if (node_a -> data != node_b -> data) return false;

        q.push(node_a -> left);
        q.push(node_b -> right);
        q.push(node_a -> right);
        q.push(node_b -> left);
    }
	return true;
}

int		main()
{
	t_node *node1 = create_node(10);
	t_node *node2 = create_node(20);
	t_node *node3 = create_node(20);
	t_node *node4 = create_node(30);
	t_node *node5 = create_node(40);
	t_node *node6 = create_node(40);
	t_node *node7 = create_node(30);
	node1 -> left = node2;
	node1 -> right = node3;
	node2 -> left = node4;
	node2 -> right = node5;
	node3 -> left = node6;
	node3 -> right = node7;
	print_node(node1);
	if (is_sym(node1)) cout << "y" << endl;
	else cout << "n" << endl;
}

