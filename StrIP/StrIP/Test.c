

char * defangIPaddr(char * address){

	int len = (strlen(address));
	char* ans = malloc(len + 6 + 1);
	int j = 0;
	for (int i = 0; i<len; i++)
	{
		if (address[i] == '.')
		{
			ans[j++] = '[';
			ans[j++] = '.';

			ans[j++] = ']';
			continue;
		}
		ans[j++] = address[i];
	}
	ans[j] = '\0';
	return ans;
}

