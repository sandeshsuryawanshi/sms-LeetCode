class Solution {
public:
    vector<int>parent,size;//defining parent and size vectors for Union and other operations
    void make(int var)
    {
        parent[var]=var;//make nodes and setting their parent/leader to themselves ans size of subpart as 1
        size[var]=1;
        return;
    }
    int findparent(int var)
    {
        if(parent[var]==var)//base case
        {
            return var;
        }
        parent[var]=findparent(parent[var]);//assign parent as we return it...so as to save time for next operations when we try to find it
        return parent[var];//till we reach leader or parent of subpart/subgroup
    }
    void Union(int var1,int var2)//to merge two subparts/subgroups
    {
        var1=findparent(var1);//till we find their leader
        var2=findparent(var2);//till we find their leader
        if(var1==var2)
        {
            return;
        }
        //based upon size we Union both sets of nodes....optimally so as to save time next time we find parents
        //we can Merge them normally too!! but here its optimised one
        if(size[var1]>size[var2])
        {
            parent[var2]=var1;
            size[var1]+=size[var2];
        }
        else
        {
            parent[var1]=var2;
            size[var2]+=size[var1];
        }
        return;
    }
    int numberOfGoodPaths(vector<int>& vals,vector<vector<int>>& edges) 
    {
        int ans=vals.size();//all individual nodes are Good Paths themselves
        parent.assign(vals.size(),0);//parents of n nodes
        size.assign(vals.size(),0);//size of enclave/subpart they are in
        unordered_map<int,vector<int>>nodeswithval;//find nodes with a partcular value
        vector<int>uniquevals;//name says itself
        unordered_map<int,int>alreadyinserted;//for previous vector
        unordered_map<int,bool>alreadycameacross;//already came across this node(of low value than current one, so its valid to include in path)....so we can union our current nodes it with as per approach
        vector<vector<int>>adjacenttonode(vals.size());//nodes adjacent to a particular node
        for(int i=0;i<vals.size();i++)
        {
            nodeswithval[vals[i]].push_back(i);
            if(!alreadyinserted[vals[i]])
            {
                alreadyinserted[vals[i]]=true;
                uniquevals.push_back(vals[i]);
            }
            make(i);//declare somewhat the nodes present in tree/graph
        }
        sort(uniquevals.begin(),uniquevals.end());
        for(auto j:edges)
        {
            adjacenttonode[j[0]].push_back(j[1]);//self explanatory
            adjacenttonode[j[1]].push_back(j[0]);
        }
        for(int i=0;i<uniquevals.size();i++)//start with lowest value and as we approach middle values we can merge them with existing nodes with smaller value than them 
        {
            for(auto j:nodeswithval[uniquevals[i]])
            {
                alreadycameacross[j]=true;//to acknowledge it exists in our graph/tree
                for(auto k:adjacenttonode[j])
                {
                    if(alreadycameacross[k])//if already exists in graph/tree then merge with them
                    {
                        Union(j,k);
                    }
                }
            }
            unordered_map<int,int>sameparents;//if the nodes with same value have same parents/leader then they belong to same subpart and hence are connected....with in between values less than or equal to them.
            for(auto j:nodeswithval[uniquevals[i]])//to check what said just now
            {
                parent[j]=findparent(j);//to finalise its leader
                sameparents[parent[j]]++;
            }
            for(auto k:sameparents)
            {
                if(k.second>1)
                {
                    ans+=((k.second)*(k.second-1))/2;//permutations and combinations
                }
            }
        }
        return ans;
    }
};