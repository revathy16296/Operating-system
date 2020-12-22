int main (int argc, char *argv[]) 
{

	int first[FIRST];
	int second[SECOND];


	printf("Enter any 10 number's for first array: \n");
	for (int i = 0; i < FIRST; i++) {
		scanf("%d", &first[i]);
	}


	printf("Enter any 5 number's for second array: \n");
	for (int j = 0; j < SECOND; j++) {
		scanf("%d", &second[j]);
	}

	concatnate(first, second);

	return EXIT_SUCCESS;
}