//
// Created by eet12 on 4/19/17.
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


    /*
     * Abstract Prediction models
     *  Predict models are used to parametrize predict functions of filters
     */
    class Predict_model_base : public Bayes_base
    {
        // Empty
    };

    class Sampled_predict_model : virtual public Predict_model_base
    /* Sampled stochastic predict model
     * x*(k) = fw(x(k-1), w(k))
     * fw should generate samples from the stochastic variable w(k).
     * This fundamental model is used instead of the predict likeligood function L(x*|x)
     * Since drawinf samples from an arbitrary L is non-trivial (see MCMC theory)
     * the burden is place on the model to generate these samples.
     * Defines an interface without data members
     */

    {
    public:
        virtual const FM::Vec& fw(const FM::Vec& x) const = 0;
        // Note: Reference return value as a speed optimization, MUST be copied by caller.

    };

    class Functional






}

#endif //CWRU_CATHETER_BAYES_TRACKING_H
