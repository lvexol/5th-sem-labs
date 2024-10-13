import networkx as nx

g=nx.Graph()
edges=[("A", "B", 5), ("A", "D", 8), ("B", "D", 7), ("B", "C", 2), ("C", "D", 6)]
g.add_weighted_edges_from(edges)

def rout(graph):
    for node in graph.nodes:
        l=nx.single_source_dijkstra_path_length(graph,node)
        p=nx.single_source_dijkstra_path(graph,node)
        print("current node: ",node)
        for dest,leng in l.items():
            print(dest,leng)
            print(p)

rout(g)
