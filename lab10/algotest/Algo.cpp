//
// Created by kwiakami on 16.05.17.
//

#include "Algo.h"

namespace algo {
    void CopyInto(const std::vector<int> &v, int n_elements, std::vector<int> *out) {
        std::copy_n(v.begin(), n_elements, std::back_inserter(*out));
    }

    bool Contains(const std::vector<int> &v, int element) {
        if (std::find(v.begin(), v.end(), element) != std::end(v)) {
            return 1;
        } else {
            return 0;
        }
    }

    void InitializeWith(int initial_value, std::vector<int> *v) {
        std::fill(v->begin(), v->end(), initial_value);
    }

    std::vector<int> InitializedVectorOfLength(int length, int initial_value) {
        std::vector<int> u;
        std::fill_n(std::back_inserter(u), length, initial_value);
        return u;
    }

    std::vector<std::string> MapToString(const std::vector<double> &v) {
        std::vector<std::string> p;
        std::transform(v.begin(), v.end(), std::back_inserter(p), [](double i) { return std::to_string(i); });
        return p;
    }


    std::set<std::string> Keys(const std::map<std::string, int> &m) {
        std::set<std::string> k;
        std::transform(m.begin(), m.end(), std::inserter(k, k.begin()),
                       [](std::pair<std::string, int> i) { return i.first; });
        return  k;
    }

    bool ContainsKey(const std::map<std::string, int> &v, const std::string &key) {
        return v.find(key) != v.end();
    }

    std::vector<int> Values(const std::map<std::string, int> &m) {
        return std::vector<int>();
    }

    std::map<std::string, int> DivisableBy(const std::map<std::string, int> &m, int divisor) {
        return std::map<std::string, int>();
    }

    void SortInPlace(std::vector<int> *v) {

    }

    std::vector<int> Sort(const std::vector<int> &v) {
        return std::vector<int>();
    }

    void SortByFirstInPlace(std::vector<std::pair<int, int>> *v) {

    }

    void SortBySecondInPlace(std::vector<std::pair<int, int>> *v) {

    }

    void SortByThirdInPlace(std::vector<std::tuple<int, int, int>> *v) {

    }

    std::string Join(const std::string &joiner, const std::vector<double> &v) {
        return std::__cxx11::string();
    }

    int Sum(const std::vector<int> &v) {
        return 0;
    }

    int Product(const std::vector<int> &v) {
        return 0;
    }

    bool ContainsValue(const std::map<std::string, int> &v, int value) {
        return false;
    }

    std::vector<std::string> RemoveDuplicates(const std::vector<std::string> &v) {
        return std::vector<std::string>();
    }

    void RemoveDuplicatesInPlace(std::vector<std::string> *v) {

    }

    int HowManyShortStrings(const std::vector<std::string> &v, int inclusive_short_length) {
        return 0;
    }

    std::vector<int> Values(const std::map<std::string, int> &m);

    bool ContainsValue(const std::map<std::string, int> &v, int value);
}