namespace contrib {

namespace kasper {

// My function
template<class Type>
Type func(Type x) {
  return x;
}

// Make it work for vectors
VECTORIZE1_t(func)

}

}
