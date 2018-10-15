class shoppingCart(object):

    """Create shopping cart objects for users """

    def __init__(self, customer_name):
        self.customer_name = customer_name
        self.items_in_cart = {}

    def add_items(self, product, price):

        """Add items in cart """
        if product in self.items_in_cart:
            print(product + " is already in cart.")
        else:
            self.items_in_cart[product] = price
            print(product + " added")

    def removed_items(self, product):
        """ remove product from the cart """
        if not product in self.items_in_cart:
            print(product + " is not in cart")
        else:
            del self.items_in_cart[product]
            print(product + " is removed")



my_cart = shoppingCart("Aji")

my_cart.add_items("phones",10)
my_cart.add_items("Battery",9)

my_cart.removed_items("phonesi")
        
    
    
