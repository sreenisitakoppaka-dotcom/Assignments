#include <stdio.h>

int main() {
    float order_amount, discount = 0.0, delivery_charge = 0.0, final_amount;
    int membership_type;

    
    printf("Enter the order amount (in ₹): ");
    scanf("%f", &order_amount);
    
    printf("Enter membership type (1 for Premium, 0 for Regular): ");
    scanf("%d", &membership_type);

    
    if (order_amount >= 500) {
        delivery_charge = 0.0; // Free delivery
        if (membership_type == 1) {
            discount = 0.10 * order_amount; // 10% discount for premium
        } else {
            discount = 0.0; // No discount for regular
        }
    } else {
        delivery_charge = 50.0; // ₹50 delivery charge
        discount = 0.0;         // No discount below ₹500
    }

    
    final_amount = order_amount - discount + delivery_charge;

    
    printf("\n--- Order Summary ---\n");
    printf("Order Amount:    ₹%.2f\n", order_amount);
    printf("Discount:       -₹%.2f\n", discount);
    printf("Delivery Charge: +₹%.2f\n", delivery_charge);
    printf("---------------------\n");
    printf("Final Payable:   ₹%.2f\n", final_amount);

    return 0;
}
