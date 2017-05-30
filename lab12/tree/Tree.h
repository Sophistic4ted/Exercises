//
// Created by kwiakami on 30.05.17.
//

#ifndef JIMP_EXERCISES_TREE_H
#define JIMP_EXERCISES_TREE_H

namespace tree {
    template<class T>
    class Element{
    public:
        Element(const T& example): kept(example) {
        }

        ~Element()
        {

        }

        Element<T> * Left() const{

            return left;
        }

        Element<T> * Right() const{
            return right;
        }

        T Get() const{
            return kept;
        }


        const T kept;
        Element<T> * right;
        Element<T>* left;
    };

    template <class T>
    class Tree{
    public:
        Tree(const Element<T>& rot){
            root = &rot;
        }
        void Insert(const Element<T> &e) {

        }

        bool Find(const Element<T> &e) const{
            return false;
        }

        size_t Depth() const{
            return 0;
        }

        size_t Size() const{
            return 0;
        }

        const Element<T> * root;


        void Hilfeinsert(Element<T> &node, const Element<T> &newo){
            if(newo.Get() < node.Get()){
                if(node.left == nullptr){
                    *node.left = newo;
                } else {
                    Hilfeinsert(*node.left, newo);
                }
            } else {
                if(node.right == nullptr){
                    *node.right = newo;
                } else {
                    Hilfeinsert(*node.right, newo);
                }
            }
        }

    };
}
#endif //JIMP_EXERCISES_TREE_H
