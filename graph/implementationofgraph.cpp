#include <bits/stdc++.h>
using namespace std;

class edge{
   public:
   int destinationvertexid;
   int weight;
   	edge()
   	{
   		
	   }
	   edge(int destvid,int w)
	   {
	   	  destinationvertexid=destvid;
	   	  weight=w;
	   }
	   void setedgevalue(int destvid,int w)
	   {
	   	  destinationvertexid=destvid;
	   	  weight=w;
	   }
	   void setWeight(int w) {
          weight = w;
        }

       int getdestinationvertexid() {
         return destinationvertexid;
       }
       int getweight() {
         return weight;
        }
        
        
};

class vertex{
   public:
   	int stateid;
   	string statename;
   	list<edge> edgelist;
   	
   	vertex()
   	{
   		stateid=0;
   		statename="";
	   }
	vertex(int id,string name)
   	{
   		stateid=id;
   		statename=name;
	   }
	   int getstateid()
	   {
	   	return stateid;
	   }
	   string getstatename()
	   {
	   	return statename;
	   	
	   }
	   void setstateid(int ids)
	   {
	   	stateid=ids;
	   }
	   void setstatename(string names)
	   {
	   	statename=names;
	   }
	   
	   list<edge> getedgelist()
	   {
	   	return edgelist;
	   }
	   
};

class graph{
	public:
    vector<vertex> vertices;
		//storing object of type vertex
		
		
		void addvertex(vertex newvertex)
		{
			bool check = checkifvertexexistbyid(newvertex.getstateid());
			if(check==true)
			{
				cout<<"vertex with this id already exist \n";
			}
			else{
				vertices.push_back(newvertex);
				cout<<"\n new vertex added successfully \n ";
			}
			
		}
		
		
		bool checkifvertexexistbyid(int vid)
		{
			
			for(int i=0;i<vertices.size();i++)
			{
				if(vertices.at(i).getstateid()==vid)
				{
					return true;
				}
			}
			return false;
			
		}
		
		
		
		
};
int main()
{
	
  graph g;
  string sname;
  int id1, id2, w;
  int option;
  bool check;

  do {
    cout << "What operation do you want to perform? " <<
      " Select Option number. Enter 0 to exit." << endl;
    cout << "1. Add Vertex" << endl;
    cout << "2. Update Vertex" << endl;
    cout << "3. Delete Vertex" << endl;
    cout << "4. Add Edge" << endl;
    cout << "5. Update Edge" << endl;
    cout << "6. Delete Edge" << endl;
    cout << "7. Check if 2 Vertices are Neigbors" << endl;
    cout << "8. Print All Neigbors of a Vertex" << endl;
    cout << "9. Print Graph" << endl;
    cout << "10. Clear Screen" << endl;
    cout << "0. Exit Program" << endl;

    cin >> option;
    vertex v1;

    switch (option) {
    case 0:

      break;

    case 1:
      cout << "Add Vertex Operation -" << endl;
      cout << "Enter State ID :";
      cin >> id1;
      cout << "Enter State Name :";
      cin >> sname;
      v1.setstateid(id1);
      v1.setstatename(sname);
      g.addvertex(v1);


      break;

  /*  case 2:
      cout << "Update Vertex Operation -" << endl;
      cout << "Enter State ID of Vertex(State) to update :";
      cin >> id1;
      cout << "Enter State Name :";
      cin >> sname;
      g.updateVertex(id1, sname);

      break;

    case 3:
      cout << "Delete Vertex Operation -" << endl;
      cout << "Enter ID of Vertex(State) to Delete : ";
      cin >> id1;
      g.deleteVertexByID(id1);

      break;

    case 4:
      cout << "Add Edge Operation -" << endl;
      cout << "Enter ID of Source Vertex(State): ";
      cin >> id1;
      cout << "Enter ID of Destination Vertex(State): ";
      cin >> id2;
      cout << "Enter Weight of Edge: ";
      cin >> w;
      g.addEdgeByID(id1, id2, w);

      break;

    case 5:
      cout << "Update Edge Operation -" << endl;
      cout << "Enter ID of Source Vertex(State): ";
      cin >> id1;
      cout << "Enter ID of Destination Vertex(State): ";
      cin >> id2;
      cout << "Enter UPDATED Weight of Edge: ";
      cin >> w;
      g.updateEdgeByID(id1, id2, w);

      break;

    case 6:
      cout << "Delete Edge Operation -" << endl;
      cout << "Enter ID of Source Vertex(State): ";
      cin >> id1;
      cout << "Enter ID of Destination Vertex(State): ";
      cin >> id2;
      g.deleteEdgeByID(id1, id2);

      break;

    case 7:
      cout << "Check if 2 Vertices are Neigbors -" << endl;
      cout << "Enter ID of Source Vertex(State): ";
      cin >> id1;
      cout << "Enter ID of Destination Vertex(State): ";
      cin >> id2;
      check = g.checkIfEdgeExistByID(id1, id2);
      if (check == true) {
        cout << "Vertices are Neigbors (Edge exist)";
      } else {
        cout << "Vertices are NOT Neigbors (Edge does NOT exist)";
      }

      break;

    case 8:
      cout << "Print All Neigbors of a Vertex -" << endl;
      cout << "Enter ID of Vertex(State) to fetch all Neigbors : ";
      cin >> id1;
      g.getAllNeigborsByID(id1);

      break;

    case 9:
      cout << "Print Graph Operation -" << endl;
      g.printGraph();

      break;
*/
    default:
      cout << "Enter Proper Option number " << endl;
    }
    cout << endl;


} while (option != 0);

 
}
