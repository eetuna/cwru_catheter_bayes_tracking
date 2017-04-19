//
// Created by surgical36 on 4/19/17.
//

#ifndef CWRU_CATHETER_BAYES_TRACKING_H
#define CWRU_CATHETER_BAYES_TRACKING_H

/* Filter namespace */

namespace Bayes_filter
{
    // Allow use of a short name for matrix namespace
    namespace FM = Bayes_filter_matrix;

/*
 * Abstraction support classes, at the base of the hierarchy
 */

class Bayes_base {
/*
 * A very abstract Polymorphic base representation!
 * Interface provides: type, internal, error handing, and destruction
 */
    public:
        typedef Bayes_filter_matrix::Float Float;
        // Type used throughout as a number representation for state etc

        virtual ~Bayes_base() = 0;
        // Polymorphic

};


}

#endif //CWRU_ROBOTICS_BAYES_TRACKING_H
