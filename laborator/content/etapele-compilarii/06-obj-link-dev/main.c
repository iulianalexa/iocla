
extern int qty;

void set_price(int);
void print_price();
void print_quantity();

int main(void) {
	set_price(21);
	qty = 42;
	print_price();
	print_quantity();
	return 0;
}
