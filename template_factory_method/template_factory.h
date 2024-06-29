/**
 * This genious template was created based on the idea of Scott Meyers' book
 * "Errective Modern C++". 
 * 
 * It takes first template parameter as a type of the implemented type (InvType).
 * List of parameters can be changed according list appropriate constructor (Ts).
 * 
 * delInvnt is lambda which implements deleter for our type. It can include additional logic.
 * Template function return unique_ptr, but it can initialize a shared_ptr on the client side.
 * 
*/

#include <memory>

template<typename InvType, typename... Ts>
auto makeInvestment(Ts&&... params)
{
    auto delInvmt = [] (InvType* pInvestment) {
        //TODO: add some additional logic if any...
        delete pInvestment;
    };
    
    return std::unique_ptr<InvType, decltype(delInvmt)>(new InvType(std::forward<Ts>(params) ...), delInvmt);
}