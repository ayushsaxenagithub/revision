#include<bits/stdc++.h>
#define int long long 

using namespace std;

vector<vector<int>> v;
vector<bool> visited;
vector<int> connection;	

signed main(){
	int n,m;
	cin>>n>>m;
	v.resize(n);
	visited.resize(n,false);
	connection.resize(n);
	for(int i = 0 ; i < m ; ++i){
		int k;
		cin>>k;
		vector<int> p(k);
		for(int j = 0 ; j < k ; ++j){
			cin>>p[j];
            --p[j];
		}
		for(int l = 0 ; l < k -1 ; ++l){
			v[p[l]].push_back(p[l+1]);
			v[p[l+1]].push_back(p[l]);
		}
	}
	for(int i = 0 ; i < n ; ++i){
		if(!visited[i]){
			vector<int> components;
            queue<int> q;
            q.push(i);
            visited[i] = true;
            while(!q.empty()){
                int currentvertex = q.front();
                q.pop();
                components.push_back(currentvertex);
                for(auto i : v[currentvertex]){
                    if(!visited[i]){
                        q.push(i);
                        visited[i] = true;
                    }
                }
            }
            for(auto i : components){
                connection[i] = components.size();
            }
		}
	}
    for (int i = 0; i < n; ++i) {
        cout << connection[i] << " ";
    }
    cout << endl;
	return 0;
}
	