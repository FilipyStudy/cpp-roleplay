#include <iostream>
#include <bitset>
#include <vector>
#include <math.h>

int binaryToDecimal(std::bitset<16> binary) {
	int finalResult = 0;

	for(int i = 0; i < binary.size(); ++i){
		finalResult += binary[i] * pow(2, i);
	}

	return finalResult;
}


std::vector<int> decimalToBinary(int x){
	std::vector<int> binaryVector;
	int y = x;

	while (y != 0){
		int fractPart;
		std::vector<int>::iterator it;
		it = binaryVector.begin();
		binaryVector.insert(it, fmod(y, 2));
		if (fmod(y, 2)){y = y/2;}
		else{y = (y - fmod(y,2))/2;}
	}
	return binaryVector;
}

int main(int argc, char* argv[]){
	if (argv[1] == "decimal"){
		std::vector<int> result = decimalToBinary(argv[2]);
		for (std::vector<int>::iterator it = result.begin(); it != result.end(); ++it)
			std::cout << *it;
		std::cout << '\n';
	}
	else if(argv[1] == "binary"){
		std::cout << binaryToDecimal[argv[2]] << '\n';
	}

}
