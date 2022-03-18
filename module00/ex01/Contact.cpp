//
// Created by Waif Jonathon on 3/18/22.
//

class ContactClass {
public:
	ContactClass(){
		key[0] = "FirstName";
		key[1] = "LastName";
		key[2] = "Nickname";
		key[3] = "PhoneNumb";
		key[4] = "DarkSecret";
	}
	void setContact()
	{
		std::cout << "* All fields should non-empty fields *" << std::endl;
		std::cout << key[0], std::cin >> val[0];
		std::cout << key[1], std::cin >> val[1];
		std::cout << key[2], std::cin >> val[2];
		std::cout << key[3], std::cin >> val[3];
		std::cout << key[4], std::cin >> val[4];
	}
	void getContactKey(int i){
		std::cout << this->key[i];
	}
	void getContactVal(int i){
		std::cout << this->val[i];
	}
};
