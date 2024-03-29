#include <iostream>

#include <string>

class Invoice {

 private:

    std::string partNumber;

    std::string partDescription;

    int itemQuantity;

    int pricePerItem;

 public:

    Invoice(const std::string &, const std::string &, int, int);

    // SETTERS

    void setPartNumber(const std::string &);

    void setPartDescription(const std::string &);

    void setItemQuantity(int);

    void setPricePerItem(int);

    // GETTERS

    std::string getPartNumber() const;

    std::string getPartDescription() const;

    int getItemQuantity() const;

    int getPricePerItem() const;

    int getInvoiceAmount() const;

};

// Constructor

Invoice::Invoice(const std::string &number,

                 const std::string &description,

                 int quantity,

                 int price) {

    setPartNumber(number);

    setPartDescription(description);

    setItemQuantity(quantity);

    setPricePerItem(price);

}

// SETTERS

void Invoice::setPartNumber(const std::string &number) { partNumber = number; }

void Invoice::setPartDescription(const std::string &description) {

    partDescription = description;

}

void Invoice::setItemQuantity(int quantity) {

    itemQuantity = (quantity > 0) ? quantity : 0;

}

void Invoice::setPricePerItem(int price) {

    pricePerItem = (price > 0) ? price : 0;

}

// GETTERS

std::string Invoice::getPartNumber() const { return partNumber; }

std::string Invoice::getPartDescription() const { return partDescription; }

int Invoice::getItemQuantity() const { return itemQuantity; }

int Invoice::getPricePerItem() const { return pricePerItem; }

// calcualates the invoice amount

int Invoice::getInvoiceAmount() const { return (getItemQuantity() * getPricePerItem()); }

int main(int argc, const char *argv[]) {

    Invoice invoice1("12345", "Hammer", 12, 6);

std::cout << "Part Number: " << invoice1.getPartNumber();

    std::cout << "\nPart Description: " << invoice1.getPartDescription();

    std::cout << "\n"

              << invoice1.getItemQuantity() << " x "

              << invoice1.getPricePerItem();

    std::cout << " = " << invoice1.getInvoiceAmount() << std::endl;

    return 0;

}
