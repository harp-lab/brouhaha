import random

def generate_random_graph(num_vertices):
    graph = {}
    
    for vertex in range(num_vertices):
        # Decide how many vertices this vertex will connect to (between 1 and num_vertices/2)
        num_connections = random.randint(1, num_vertices // 2)
        # Generate random connections for this vertex
        connections = random.sample(range(num_vertices), num_connections)
        # Add the connections to the graph
        graph[vertex] = set(connections)
    
    return graph

def write_graph_to_file(graph, filename):
    with open(filename, 'w') as file:
        file.write("(define (g) (hash")
        for vertex, connections in graph.items():
            file.write(f" {vertex} (set")
            for connection in connections:
                file.write(f" {connection}")
            file.write(")")
        file.write("))")

def main():
    num_vertices = int(input("Enter the number of vertices: "))
    if num_vertices <= 0:
        print("Number of vertices must be positive.")
        return
    
    graph = generate_random_graph(num_vertices)
    print("Generated graph edges:")
    print(graph)
    
    filename = input("Enter the filename to save the graph: ")
    write_graph_to_file(graph, filename)

if __name__ == "__main__":
    main()
