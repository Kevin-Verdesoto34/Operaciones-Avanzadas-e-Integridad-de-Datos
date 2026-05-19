#include <iostream>
#include <string>

int main() {
	std::string products[5] = {"Manzana", "Pan", "Leche", "Arroz", "Azucar"};
	double prices[5] = {0.50, 1.20, 0.80, 2.00, 1.50};

	std::string query;
	std::cout << "Ingrese el nombre del producto a buscar: ";
	std::getline(std::cin, query);

	bool found = false;
	for (int i = 0; i < 5; ++i) {
		if (products[i] == query) {
			std::cout << "Producto: " << products[i] << "\n";
			std::cout << "Precio: $" << prices[i] << "\n";
			found = true;
			break;
		}
	}

	if (!found) std::cout << "Producto no encontrado." << std::endl;

	return 0;
}