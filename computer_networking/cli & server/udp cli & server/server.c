int serverSocket;
struct sockaddr_in serverAddr;
char buffer[MAX_MESSAGE_SIZE];
socklen_t clientLen = sizeof(struct sockaddr_in);
ssize_t bytesRead;

// Create socket
if ((serverSocket = socket(AF_INET, SOCK_DGRAM, 0)) == -1) {
	perror("Socket creation failed");
	exit(EXIT_FAILURE);
}

// Configure server address
memset(&serverAddr, 0, sizeof(serverAddr));
serverAddr.sin_family = AF_INET;
serverAddr.sin_addr.s_addr = INADDR_ANY;
serverAddr.sin_port = htons(PORT);

// Bind socket
if (bind(serverSocket, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) == -1) {
	perror("Bind failed");
	exit(EXIT_FAILURE);
}

// Initialize mutex
pthread_mutex_init(&mutex, NULL);

printf("Server listening on port %d...\n", PORT);
