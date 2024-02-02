/*using namespace std;
#include<bits/stdc++.h>
class Graph{
public:
    unordered_map<int,list<pair<int,int>>> adj;
    void insert(int u,int v,int wt)
    {
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }
    void print()
    {
        for(auto it:adj)
        {
            cout<<it.first<<"->";
            for(auto jt:it.second)
            {
                cout<<"{"<<jt.first<<","<<jt.second<<"}";
            }
        }
    }
    vector<int> dijktraAlgo(int n,int src)
    {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<int> dist(n,0);
        dist[src]=0;
        pq.push({dist[src],src});
        while(!pq.empty())
        {
            auto it=pq.top();
            int d=it.first;
            int node=it.second;
            for(auto i:adj[node])
            {
                int v=i.first;
                int wt=i.second;
                if(d+wt < dist[v])
                {
                    dist[v]=d+wt;
                }
            }
        }
        return dist;
    }
};
    bool checkCorrectEmail(string email)
    {
        int len=email.length();
        bool flag1=false;
        bool flag2=false;
        for (int i=0;i<len;i++)
        {
            if(email[i]=='@' || flag1){
                flag1=true;
                    if(email[i]=='.'){
                        flag2=true;
                        break;
                    }
            }
        }
        if(!flag1 || !flag2)
            cout<<"Incorrect Email Address"<<endl;
        return flag1 && flag2;
    }
class User{
public:
    string user_id;
    string password;
    int index;
    string email;
    string status;
    int following;
    void addUser(vector<User> &lis)
    {
            ofstream fout("allUserDetails",ios::app);
            fflush(stdin);
            cout<<"Enter the User Id:";
            getline(cin,user_id);
            fflush(stdin);
            fout<<user_id<<";";
            ofstream new_fout(user_id);
            new_fout<<user_id<<";";
            cout<<"Enter the Password:";
            getline(cin,password);
            fout<<password<<";";
            new_fout<<password<<";";
            do{
            cout<<"Enter the Email Address:";
            getline(cin,email);
            }while(!checkCorrectEmail(email));
            fflush(stdin);
            fout<<email<<";";
            new_fout<<email<<";";
            cout<<"Enter into Your Bio:";
            getline(cin,status);
            fflush(stdin);
            fout<<status<<";";
            new_fout<<status<<";";
            following=0;
            fflush(stdin);
            fout<<following<<"."<<endl;
            fout.close();
            lis.push_back(*this);
    }
    void print()
    {
        cout<<endl;
        cout<<"UserId:"<<this->user_id<<endl;
        cout<<"Email:"<<this->email<<endl;
        cout<<"Bio:"<<this->status<<endl;
        cout<<"Num of People Following:"<<this->following<<endl;
    }
};

    int checkUser(vector<User> arr)
    {
        cout<<"Log In Page"<<endl;
        cout<<"Username:";
        string u;
        getline(cin,u);
        cout<<"Password:";
        string p;
        getline(cin,p);
        int flag=0;
        for(auto it:arr)
        {
            if(it.user_id==u && it.password==p)
                flag=1;
        }
        return flag;
    }

    string getName(string str)
    {
        string name;
        int len=str.length();
        for(int i=0;i<len;i++)
        {
            if(str[i]!=';')
                name.push_back(str[i]);
            else
                break;
        }
        return name;
    }
    string getPassword(string str)
    {
        int len=str.length();
        int cnt=0;
        string pass;
        for(int i=0;i<len;i++)
        {
            if(str[i]==';'){
                cnt++;
                continue;
            }
            if(cnt==1)
                pass.push_back(str[i]);
            if(cnt==2)
                break;
        }
        return pass;
    }
    string getEmail(string str)
    {
        string email;
        int cnt=0;
        int len=str.length();
        for(int i=0;i<len;i++)
        {
            if(str[i]==';'){
                cnt++;
                continue;
            }
            if(cnt==2)
                email.push_back(str[i]);
            if(cnt==3)
                break;
        }
        return email;
    }
    string getStatus(string str)
    {
        string status;
        int len=str.length();
        int cnt=0;
        int k=0;
        for(int i=0;i<len;i++)
        {
            if(str[i]==';'){
                cnt++;
                continue;
            }
            if(cnt==3)
                status.push_back(str[i]);
            if(cnt==4)
                break;
        }
        return status;
    }
    int getFollow(string str)
    {
        string num;
        int len=str.length();
        int k=0;
        int cnt=0;
        for(int i=0;i<len;i++){
            if(str[i]==';'){
                cnt++;
                continue;
            }
            if(str[i]=='.')
                break;
            if(cnt==4)
                num.push_back(str[i]);
        }
        int result=stoi(num);
        return result;
    }
       vector<User> readExistingUsers()
        {
            vector<User> lis;
            string line;
            ifstream fin("allUserDetails");
            while(getline(fin,line))
            {
                User u;
                u.user_id=getName(line);
                u.email=getEmail(line);
                u.status=getStatus(line);
                u.password=getPassword(line);
                //u.following=getFollow(line);
                lis.push_back(u);
            }
            fin.close();
            return lis;
        }
int main()
{
    vector<User> arr;
    arr=readExistingUsers();
    if(checkUser(arr)){
    cout<<"Success!"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        User new_user;
        cout<<endl<<"Enter Details for the New user:"<<endl;
        new_user.addUser(arr);
    }
    cout<<endl<<"Information For All The Users Are:"<<endl;

    for(auto it:arr)
    {
        it.print();
        cout<<endl<<"-------------"<<endl;
    }
    }
    else{
        cout<<"Try Again Later"<<endl;
    }
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ofstream fout("admindetails");
    fout<<"hey"<<endl;
    fout.close();
}
