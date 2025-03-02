
#include "sdk/sdk.buildv1.1.15/windows_release_mx/include/sdk_stdlib_collections_2map.h"

bbString bbDBType(t_stdlib_collections_Map_1ii_Node_Color*p){
  	return "stdlib.collections.Map<monkey.types.Int,monkey.types.Int>.Node.Color";
}
bbString bbDBValue(t_stdlib_collections_Map_1ii_Node_Color*p){
  	return bbString( *(int*)p );
}

void t_stdlib_collections_Map_1ii_Node::gcMark(){
  bbGCMark(m__0left);
  bbGCMark(m__0right);
  bbGCMark(m__0parent);
}

t_stdlib_collections_Map_1ii_Node::t_stdlib_collections_Map_1ii_Node(bbInt l_key,bbInt l_value,t_stdlib_collections_Map_1ii_Node_Color l_color,t_stdlib_collections_Map_1ii_Node* l_parent){
  this->m__0key=l_key;
  this->m__0value=l_value;
  this->m__0color=l_color;
  this->m__0parent=l_parent;
}
t_stdlib_collections_Map_1ii_Node::~t_stdlib_collections_Map_1ii_Node(){
}

void t_stdlib_collections_Map_1ii_Node::m_Value(bbInt l_value){
  this->m__0value=l_value;
}

t_stdlib_collections_Map_1ii_Node* t_stdlib_collections_Map_1ii_Node::m_PrevNode(){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_node{};
    t_stdlib_collections_Map_1ii_Node* l_parent{};
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(l_parent);
    }
  }f0{};
  if(bbBool(this->m__0left.get())){
    struct f1_t : public bbGCFrame{
      t_stdlib_collections_Map_1ii_Node* l_node{};
      void gcMark(){
        bbGCMark(l_node);
      }
    }f1{};
    f1.l_node=this->m__0left.get();
    while(bbBool(f1.l_node->m__0right.get())){
      f1.l_node=f1.l_node->m__0right.get();
    }
    return f1.l_node;
  }
  f0.l_node=this;
  f0.l_parent=this->m__0parent.get();
  while((bbBool(f0.l_parent)&&(f0.l_node==f0.l_parent->m__0left.get()))){
    f0.l_node=f0.l_parent;
    f0.l_parent=f0.l_parent->m__0parent.get();
  }
  return f0.l_parent;
}

t_stdlib_collections_Map_1ii_Node* t_stdlib_collections_Map_1ii_Node::m_NextNode(){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_node{};
    t_stdlib_collections_Map_1ii_Node* l_parent{};
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(l_parent);
    }
  }f0{};
  if(bbBool(this->m__0right.get())){
    struct f1_t : public bbGCFrame{
      t_stdlib_collections_Map_1ii_Node* l_node{};
      void gcMark(){
        bbGCMark(l_node);
      }
    }f1{};
    f1.l_node=this->m__0right.get();
    while(bbBool(f1.l_node->m__0left.get())){
      f1.l_node=f1.l_node->m__0left.get();
    }
    return f1.l_node;
  }
  f0.l_node=this;
  f0.l_parent=this->m__0parent.get();
  while((bbBool(f0.l_parent)&&(f0.l_node==f0.l_parent->m__0right.get()))){
    f0.l_node=f0.l_parent;
    f0.l_parent=f0.l_parent->m__0parent.get();
  }
  return f0.l_parent;
}

bbInt t_stdlib_collections_Map_1ii_Node::m_Count(bbInt l_n){
  if(bbBool(this->m__0left.get())){
    struct f1_t : public bbGCFrame{
      t_stdlib_collections_Map_1ii_Node* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    l_n=(f1.t0=this->m__0left.get())->m_Count(l_n);
  }
  if(bbBool(this->m__0right.get())){
    struct f1_t : public bbGCFrame{
      t_stdlib_collections_Map_1ii_Node* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    l_n=(f1.t0=this->m__0right.get())->m_Count(l_n);
  }
  return (l_n+1);
}

t_stdlib_collections_Map_1ii_Node* t_stdlib_collections_Map_1ii_Node::m_Copy(t_stdlib_collections_Map_1ii_Node* l_parent){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  f0.l_node=bbGCNew<t_stdlib_collections_Map_1ii_Node>(this->m__0key,this->m__0value,this->m__0color,l_parent);
  if(bbBool(this->m__0left.get())){
    struct f1_t : public bbGCFrame{
      t_stdlib_collections_Map_1ii_Node* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    f0.l_node->m__0left=(f1.t0=this->m__0left.get())->m_Copy(f0.l_node);
  }
  if(bbBool(this->m__0right.get())){
    struct f1_t : public bbGCFrame{
      t_stdlib_collections_Map_1ii_Node* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    f0.l_node->m__0right=(f1.t0=this->m__0right.get())->m_Copy(f0.l_node);
  }
  return f0.l_node;
}

t_stdlib_collections_Map_1ii_Iterator::t_stdlib_collections_Map_1ii_Iterator(t_stdlib_collections_Map_1ii_Node* l_node){
  (*this).m__0node=l_node;
}
t_stdlib_collections_Map_1ii_Iterator::~t_stdlib_collections_Map_1ii_Iterator(){
}

bbBool t_stdlib_collections_Map_1ii_Iterator::m_Valid(){
  return bbBool((*this).m__0node.get());
}

t_stdlib_collections_Map_1ii_Node* t_stdlib_collections_Map_1ii_Iterator::m_Current(){
  return (*this).m__0node.get();
}

void t_stdlib_collections_Map_1ii_Iterator::m_Bump(){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  (*this).m__0node=(f0.t0=(*this).m__0node.get())->m_NextNode();
}

bbBool t_stdlib_collections_Map_1ii_Iterator::m_AtEnd(){
  return ((*this).m__0node.get()==((t_stdlib_collections_Map_1ii_Node*)0));
}

int bbCompare(const t_stdlib_collections_Map_1ii_Iterator&x,const t_stdlib_collections_Map_1ii_Iterator&y){
  if(int t=bbCompare(x.m__0node,y.m__0node)) return t;
  return 0;
}

void bbGCMark(const t_stdlib_collections_Map_1ii_Iterator&t){
  bbGCMark(t.m__0node);
}

t_stdlib_collections_Map_1ii_KeyIterator::t_stdlib_collections_Map_1ii_KeyIterator(t_stdlib_collections_Map_1ii_Node* l_node){
  (*this).m__0node=l_node;
}
t_stdlib_collections_Map_1ii_KeyIterator::~t_stdlib_collections_Map_1ii_KeyIterator(){
}

bbBool t_stdlib_collections_Map_1ii_KeyIterator::m_Valid(){
  return bbBool((*this).m__0node.get());
}

bbInt t_stdlib_collections_Map_1ii_KeyIterator::m_Current(){
  return (*this).m__0node.get()->m__0key;
}

void t_stdlib_collections_Map_1ii_KeyIterator::m_Bump(){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  (*this).m__0node=(f0.t0=(*this).m__0node.get())->m_NextNode();
}

bbBool t_stdlib_collections_Map_1ii_KeyIterator::m_AtEnd(){
  return ((*this).m__0node.get()==((t_stdlib_collections_Map_1ii_Node*)0));
}

int bbCompare(const t_stdlib_collections_Map_1ii_KeyIterator&x,const t_stdlib_collections_Map_1ii_KeyIterator&y){
  if(int t=bbCompare(x.m__0node,y.m__0node)) return t;
  return 0;
}

void bbGCMark(const t_stdlib_collections_Map_1ii_KeyIterator&t){
  bbGCMark(t.m__0node);
}

t_stdlib_collections_Map_1ii_MapKeys::t_stdlib_collections_Map_1ii_MapKeys(t_stdlib_collections_Map_1ii* l_map){
  (*this).m__0map=l_map;
}
t_stdlib_collections_Map_1ii_MapKeys::~t_stdlib_collections_Map_1ii_MapKeys(){
}

t_stdlib_collections_Map_1ii_KeyIterator t_stdlib_collections_Map_1ii_MapKeys::m_All(){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii* t0{};
    t_stdlib_collections_Map_1ii_Node* t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  return t_stdlib_collections_Map_1ii_KeyIterator{f0.t1=(f0.t0=(*this).m__0map.get())->m_FirstNode()};
}

int bbCompare(const t_stdlib_collections_Map_1ii_MapKeys&x,const t_stdlib_collections_Map_1ii_MapKeys&y){
  if(int t=bbCompare(x.m__0map,y.m__0map)) return t;
  return 0;
}

void bbGCMark(const t_stdlib_collections_Map_1ii_MapKeys&t){
  bbGCMark(t.m__0map);
}

t_stdlib_collections_Map_1ii_ValueIterator::t_stdlib_collections_Map_1ii_ValueIterator(t_stdlib_collections_Map_1ii_Node* l_node){
  (*this).m__0node=l_node;
}
t_stdlib_collections_Map_1ii_ValueIterator::~t_stdlib_collections_Map_1ii_ValueIterator(){
}

bbBool t_stdlib_collections_Map_1ii_ValueIterator::m_Valid(){
  return bbBool((*this).m__0node.get());
}

bbInt t_stdlib_collections_Map_1ii_ValueIterator::m_Current(){
  return (*this).m__0node.get()->m__0value;
}

void t_stdlib_collections_Map_1ii_ValueIterator::m_Bump(){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  (*this).m__0node=(f0.t0=(*this).m__0node.get())->m_NextNode();
}

bbBool t_stdlib_collections_Map_1ii_ValueIterator::m_AtEnd(){
  return ((*this).m__0node.get()==((t_stdlib_collections_Map_1ii_Node*)0));
}

int bbCompare(const t_stdlib_collections_Map_1ii_ValueIterator&x,const t_stdlib_collections_Map_1ii_ValueIterator&y){
  if(int t=bbCompare(x.m__0node,y.m__0node)) return t;
  return 0;
}

void bbGCMark(const t_stdlib_collections_Map_1ii_ValueIterator&t){
  bbGCMark(t.m__0node);
}

t_stdlib_collections_Map_1ii_MapValues::t_stdlib_collections_Map_1ii_MapValues(t_stdlib_collections_Map_1ii* l_map){
  (*this).m__0map=l_map;
}
t_stdlib_collections_Map_1ii_MapValues::~t_stdlib_collections_Map_1ii_MapValues(){
}

t_stdlib_collections_Map_1ii_ValueIterator t_stdlib_collections_Map_1ii_MapValues::m_All(){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii* t0{};
    t_stdlib_collections_Map_1ii_Node* t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  return t_stdlib_collections_Map_1ii_ValueIterator{f0.t1=(f0.t0=(*this).m__0map.get())->m_FirstNode()};
}

int bbCompare(const t_stdlib_collections_Map_1ii_MapValues&x,const t_stdlib_collections_Map_1ii_MapValues&y){
  if(int t=bbCompare(x.m__0map,y.m__0map)) return t;
  return 0;
}

void bbGCMark(const t_stdlib_collections_Map_1ii_MapValues&t){
  bbGCMark(t.m__0map);
}

void t_stdlib_collections_Map_1ii::gcMark(){
  bbGCMark(m__0root);
}

t_stdlib_collections_Map_1ii::t_stdlib_collections_Map_1ii(t_stdlib_collections_Map_1ii_Node* l_root){
  this->m__0root=l_root;
}

t_stdlib_collections_Map_1ii::t_stdlib_collections_Map_1ii(){
}
t_stdlib_collections_Map_1ii::~t_stdlib_collections_Map_1ii(){
}

void t_stdlib_collections_Map_1ii::m__idxeq(bbInt l_key,bbInt l_value){
  this->m_Set(l_key,l_value);
}

bbInt t_stdlib_collections_Map_1ii::m__idx(bbInt l_key){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  f0.l_node=this->m_FindNode(l_key);
  if(!bbBool(f0.l_node)){
    return bbInt(0);
  }
  return f0.l_node->m__0value;
}

t_stdlib_collections_Map_1ii_MapValues t_stdlib_collections_Map_1ii::m_Values(){
  return t_stdlib_collections_Map_1ii_MapValues{this};
}

bbBool t_stdlib_collections_Map_1ii::m_Update(bbInt l_key,bbInt l_value){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  f0.l_node=this->m_FindNode(l_key);
  if(!bbBool(f0.l_node)){
    return false;
  }
  f0.l_node->m__0value=l_value;
  return true;
}

bbBool t_stdlib_collections_Map_1ii::m_Set(bbInt l_key,bbInt l_value){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_node{};
    t_stdlib_collections_Map_1ii_Node* l_parent{};
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(l_parent);
    }
  }f0{};
  if(!bbBool(this->m__0root.get())){
    this->m__0root=bbGCNew<t_stdlib_collections_Map_1ii_Node>(l_key,l_value,t_stdlib_collections_Map_1ii_Node_Color(0),((t_stdlib_collections_Map_1ii_Node*)0));
    return true;
  }
  f0.l_node=this->m__0root.get();
  bbInt l_cmp{};
  while(bbBool(f0.l_node)){
    f0.l_parent=f0.l_node;
    l_cmp=bbCompare(l_key,f0.l_node->m__0key);
    if((l_cmp>bbInt(0))){
      f0.l_node=f0.l_node->m__0right.get();
    }else if((l_cmp<bbInt(0))){
      f0.l_node=f0.l_node->m__0left.get();
    }else{
      f0.l_node->m__0value=l_value;
      return false;
    }
  }
  f0.l_node=bbGCNew<t_stdlib_collections_Map_1ii_Node>(l_key,l_value,t_stdlib_collections_Map_1ii_Node_Color(0),f0.l_parent);
  if((l_cmp>bbInt(0))){
    f0.l_parent->m__0right=f0.l_node;
  }else{
    f0.l_parent->m__0left=f0.l_node;
  }
  this->m_InsertFixup(f0.l_node);
  return true;
}

void t_stdlib_collections_Map_1ii::m_RotateRight(t_stdlib_collections_Map_1ii_Node* l_node){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_child{};
    void gcMark(){
      bbGCMark(l_child);
    }
  }f0{};
  f0.l_child=l_node->m__0left.get();
  l_node->m__0left=f0.l_child->m__0right.get();
  if(bbBool(f0.l_child->m__0right.get())){
    f0.l_child->m__0right.get()->m__0parent=l_node;
  }
  f0.l_child->m__0parent=l_node->m__0parent.get();
  if(bbBool(l_node->m__0parent.get())){
    if((l_node==l_node->m__0parent.get()->m__0right.get())){
      l_node->m__0parent.get()->m__0right=f0.l_child;
    }else{
      l_node->m__0parent.get()->m__0left=f0.l_child;
    }
  }else{
    this->m__0root=f0.l_child;
  }
  f0.l_child->m__0right=l_node;
  l_node->m__0parent=f0.l_child;
}

void t_stdlib_collections_Map_1ii::m_RotateLeft(t_stdlib_collections_Map_1ii_Node* l_node){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_child{};
    void gcMark(){
      bbGCMark(l_child);
    }
  }f0{};
  f0.l_child=l_node->m__0right.get();
  l_node->m__0right=f0.l_child->m__0left.get();
  if(bbBool(f0.l_child->m__0left.get())){
    f0.l_child->m__0left.get()->m__0parent=l_node;
  }
  f0.l_child->m__0parent=l_node->m__0parent.get();
  if(bbBool(l_node->m__0parent.get())){
    if((l_node==l_node->m__0parent.get()->m__0left.get())){
      l_node->m__0parent.get()->m__0left=f0.l_child;
    }else{
      l_node->m__0parent.get()->m__0right=f0.l_child;
    }
  }else{
    this->m__0root=f0.l_child;
  }
  f0.l_child->m__0left=l_node;
  l_node->m__0parent=f0.l_child;
}

void t_stdlib_collections_Map_1ii::m_RemoveNode(t_stdlib_collections_Map_1ii_Node* l_node){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_child{};
    t_stdlib_collections_Map_1ii_Node* l_parent{};
    t_stdlib_collections_Map_1ii_Node* l_splice{};
    void gcMark(){
      bbGCMark(l_child);
      bbGCMark(l_parent);
      bbGCMark(l_splice);
    }
  }f0{};
  if(!bbBool(l_node->m__0left.get())){
    f0.l_splice=l_node;
    f0.l_child=l_node->m__0right.get();
  }else if(!bbBool(l_node->m__0right.get())){
    f0.l_splice=l_node;
    f0.l_child=l_node->m__0left.get();
  }else{
    f0.l_splice=l_node->m__0left.get();
    while(bbBool(f0.l_splice->m__0right.get())){
      f0.l_splice=f0.l_splice->m__0right.get();
    }
    f0.l_child=f0.l_splice->m__0left.get();
    l_node->m__0key=f0.l_splice->m__0key;
    l_node->m__0value=f0.l_splice->m__0value;
  }
  f0.l_parent=f0.l_splice->m__0parent.get();
  if(bbBool(f0.l_child)){
    f0.l_child->m__0parent=f0.l_parent;
  }
  if(!bbBool(f0.l_parent)){
    this->m__0root=f0.l_child;
    return;
  }
  if((f0.l_splice==f0.l_parent->m__0left.get())){
    f0.l_parent->m__0left=f0.l_child;
  }else{
    f0.l_parent->m__0right=f0.l_child;
  }
  if((f0.l_splice->m__0color==t_stdlib_collections_Map_1ii_Node_Color(1))){
    this->m_DeleteFixup(f0.l_child,f0.l_parent);
  }
}

bbBool t_stdlib_collections_Map_1ii::m_Remove(bbInt l_key){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  f0.l_node=this->m_FindNode(l_key);
  if(!bbBool(f0.l_node)){
    return false;
  }
  this->m_RemoveNode(f0.l_node);
  return true;
}

t_stdlib_collections_Map_1ii_Node* t_stdlib_collections_Map_1ii::m_LastNode(){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  if(!bbBool(this->m__0root.get())){
    return ((t_stdlib_collections_Map_1ii_Node*)0);
  }
  f0.l_node=this->m__0root.get();
  while(bbBool(f0.l_node->m__0right.get())){
    f0.l_node=f0.l_node->m__0right.get();
  }
  return f0.l_node;
}

t_stdlib_collections_Map_1ii_MapKeys t_stdlib_collections_Map_1ii::m_Keys(){
  return t_stdlib_collections_Map_1ii_MapKeys{this};
}

void t_stdlib_collections_Map_1ii::m_InsertFixup(t_stdlib_collections_Map_1ii_Node* l_node){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_node{};
    f0_t(t_stdlib_collections_Map_1ii_Node* l_node):l_node(l_node){
    }
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{l_node};
  while(((bbBool(f0.l_node->m__0parent.get())&&(f0.l_node->m__0parent.get()->m__0color==t_stdlib_collections_Map_1ii_Node_Color(0)))&&bbBool(f0.l_node->m__0parent.get()->m__0parent.get()))){
    if((f0.l_node->m__0parent.get()==f0.l_node->m__0parent.get()->m__0parent.get()->m__0left.get())){
      struct f2_t : public bbGCFrame{
        t_stdlib_collections_Map_1ii_Node* l_uncle{};
        void gcMark(){
          bbGCMark(l_uncle);
        }
      }f2{};
      f2.l_uncle=f0.l_node->m__0parent.get()->m__0parent.get()->m__0right.get();
      if((bbBool(f2.l_uncle)&&(f2.l_uncle->m__0color==t_stdlib_collections_Map_1ii_Node_Color(0)))){
        f0.l_node->m__0parent.get()->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
        f2.l_uncle->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
        f2.l_uncle->m__0parent.get()->m__0color=t_stdlib_collections_Map_1ii_Node_Color(0);
        f0.l_node=f2.l_uncle->m__0parent.get();
      }else{
        struct f3_t : public bbGCFrame{
          t_stdlib_collections_Map_1ii_Node* t0{};
          void gcMark(){
            bbGCMark(t0);
          }
        }f3{};
        if((f0.l_node==f0.l_node->m__0parent.get()->m__0right.get())){
          f0.l_node=f0.l_node->m__0parent.get();
          this->m_RotateLeft(f0.l_node);
        }
        f0.l_node->m__0parent.get()->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
        f0.l_node->m__0parent.get()->m__0parent.get()->m__0color=t_stdlib_collections_Map_1ii_Node_Color(0);
        this->m_RotateRight(f3.t0=f0.l_node->m__0parent.get()->m__0parent.get());
      }
    }else{
      struct f2_t : public bbGCFrame{
        t_stdlib_collections_Map_1ii_Node* l_uncle{};
        void gcMark(){
          bbGCMark(l_uncle);
        }
      }f2{};
      f2.l_uncle=f0.l_node->m__0parent.get()->m__0parent.get()->m__0left.get();
      if((bbBool(f2.l_uncle)&&(f2.l_uncle->m__0color==t_stdlib_collections_Map_1ii_Node_Color(0)))){
        f0.l_node->m__0parent.get()->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
        f2.l_uncle->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
        f2.l_uncle->m__0parent.get()->m__0color=t_stdlib_collections_Map_1ii_Node_Color(0);
        f0.l_node=f2.l_uncle->m__0parent.get();
      }else{
        struct f3_t : public bbGCFrame{
          t_stdlib_collections_Map_1ii_Node* t0{};
          void gcMark(){
            bbGCMark(t0);
          }
        }f3{};
        if((f0.l_node==f0.l_node->m__0parent.get()->m__0left.get())){
          f0.l_node=f0.l_node->m__0parent.get();
          this->m_RotateRight(f0.l_node);
        }
        f0.l_node->m__0parent.get()->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
        f0.l_node->m__0parent.get()->m__0parent.get()->m__0color=t_stdlib_collections_Map_1ii_Node_Color(0);
        this->m_RotateLeft(f3.t0=f0.l_node->m__0parent.get()->m__0parent.get());
      }
    }
  }
  this->m__0root.get()->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
}

bbInt t_stdlib_collections_Map_1ii::m_Get(bbInt l_key){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  f0.l_node=this->m_FindNode(l_key);
  if(bbBool(f0.l_node)){
    return f0.l_node->m__0value;
  }
  return bbInt(0);
}

t_stdlib_collections_Map_1ii_Node* t_stdlib_collections_Map_1ii::m_FirstNode(){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  if(!bbBool(this->m__0root.get())){
    return ((t_stdlib_collections_Map_1ii_Node*)0);
  }
  f0.l_node=this->m__0root.get();
  while(bbBool(f0.l_node->m__0left.get())){
    f0.l_node=f0.l_node->m__0left.get();
  }
  return f0.l_node;
}

t_stdlib_collections_Map_1ii_Node* t_stdlib_collections_Map_1ii::m_FindNode(bbInt l_key){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  f0.l_node=this->m__0root.get();
  while(bbBool(f0.l_node)){
    bbInt l_cmp=bbCompare(l_key,f0.l_node->m__0key);
    if((l_cmp>bbInt(0))){
      f0.l_node=f0.l_node->m__0right.get();
    }else if((l_cmp<bbInt(0))){
      f0.l_node=f0.l_node->m__0left.get();
    }else{
      return f0.l_node;
    }
  }
  return ((t_stdlib_collections_Map_1ii_Node*)0);
}

bbBool t_stdlib_collections_Map_1ii::m_Empty(){
  return (this->m__0root.get()==((t_stdlib_collections_Map_1ii_Node*)0));
}

void t_stdlib_collections_Map_1ii::m_DeleteFixup(t_stdlib_collections_Map_1ii_Node* l_node,t_stdlib_collections_Map_1ii_Node* l_parent){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_node{};
    t_stdlib_collections_Map_1ii_Node* l_parent{};
    f0_t(t_stdlib_collections_Map_1ii_Node* l_node,t_stdlib_collections_Map_1ii_Node* l_parent):l_node(l_node),l_parent(l_parent){
    }
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(l_parent);
    }
  }f0{l_node,l_parent};
  while(((f0.l_node!=this->m__0root.get())&&(!bbBool(f0.l_node)||(f0.l_node->m__0color==t_stdlib_collections_Map_1ii_Node_Color(1))))){
    if((f0.l_node==f0.l_parent->m__0left.get())){
      struct f2_t : public bbGCFrame{
        t_stdlib_collections_Map_1ii_Node* l_sib{};
        void gcMark(){
          bbGCMark(l_sib);
        }
      }f2{};
      f2.l_sib=f0.l_parent->m__0right.get();
      if((f2.l_sib->m__0color==t_stdlib_collections_Map_1ii_Node_Color(0))){
        f2.l_sib->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
        f0.l_parent->m__0color=t_stdlib_collections_Map_1ii_Node_Color(0);
        this->m_RotateLeft(f0.l_parent);
        f2.l_sib=f0.l_parent->m__0right.get();
      }
      if(((!bbBool(f2.l_sib->m__0left.get())||(f2.l_sib->m__0left.get()->m__0color==t_stdlib_collections_Map_1ii_Node_Color(1)))&&(!bbBool(f2.l_sib->m__0right.get())||(f2.l_sib->m__0right.get()->m__0color==t_stdlib_collections_Map_1ii_Node_Color(1))))){
        f2.l_sib->m__0color=t_stdlib_collections_Map_1ii_Node_Color(0);
        f0.l_node=f0.l_parent;
        f0.l_parent=f0.l_parent->m__0parent.get();
      }else{
        if((!bbBool(f2.l_sib->m__0right.get())||(f2.l_sib->m__0right.get()->m__0color==t_stdlib_collections_Map_1ii_Node_Color(1)))){
          f2.l_sib->m__0left.get()->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
          f2.l_sib->m__0color=t_stdlib_collections_Map_1ii_Node_Color(0);
          this->m_RotateRight(f2.l_sib);
          f2.l_sib=f0.l_parent->m__0right.get();
        }
        f2.l_sib->m__0color=f0.l_parent->m__0color;
        f0.l_parent->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
        f2.l_sib->m__0right.get()->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
        this->m_RotateLeft(f0.l_parent);
        f0.l_node=this->m__0root.get();
      }
    }else{
      struct f2_t : public bbGCFrame{
        t_stdlib_collections_Map_1ii_Node* l_sib{};
        void gcMark(){
          bbGCMark(l_sib);
        }
      }f2{};
      f2.l_sib=f0.l_parent->m__0left.get();
      if((f2.l_sib->m__0color==t_stdlib_collections_Map_1ii_Node_Color(0))){
        f2.l_sib->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
        f0.l_parent->m__0color=t_stdlib_collections_Map_1ii_Node_Color(0);
        this->m_RotateRight(f0.l_parent);
        f2.l_sib=f0.l_parent->m__0left.get();
      }
      if(((!bbBool(f2.l_sib->m__0right.get())||(f2.l_sib->m__0right.get()->m__0color==t_stdlib_collections_Map_1ii_Node_Color(1)))&&(!bbBool(f2.l_sib->m__0left.get())||(f2.l_sib->m__0left.get()->m__0color==t_stdlib_collections_Map_1ii_Node_Color(1))))){
        f2.l_sib->m__0color=t_stdlib_collections_Map_1ii_Node_Color(0);
        f0.l_node=f0.l_parent;
        f0.l_parent=f0.l_parent->m__0parent.get();
      }else{
        if((!bbBool(f2.l_sib->m__0left.get())||(f2.l_sib->m__0left.get()->m__0color==t_stdlib_collections_Map_1ii_Node_Color(1)))){
          f2.l_sib->m__0right.get()->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
          f2.l_sib->m__0color=t_stdlib_collections_Map_1ii_Node_Color(0);
          this->m_RotateLeft(f2.l_sib);
          f2.l_sib=f0.l_parent->m__0left.get();
        }
        f2.l_sib->m__0color=f0.l_parent->m__0color;
        f0.l_parent->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
        f2.l_sib->m__0left.get()->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
        this->m_RotateRight(f0.l_parent);
        f0.l_node=this->m__0root.get();
      }
    }
  }
  if(bbBool(f0.l_node)){
    f0.l_node->m__0color=t_stdlib_collections_Map_1ii_Node_Color(1);
  }
}

bbInt t_stdlib_collections_Map_1ii::m_Count(){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  if(!bbBool(this->m__0root.get())){
    return bbInt(0);
  }
  return (f0.t0=this->m__0root.get())->m_Count(bbInt(0));
}

t_stdlib_collections_Map_1ii* t_stdlib_collections_Map_1ii::m_Copy(){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_root{};
    void gcMark(){
      bbGCMark(l_root);
    }
  }f0{};
  if(bbBool(this->m__0root.get())){
    struct f1_t : public bbGCFrame{
      t_stdlib_collections_Map_1ii_Node* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    f0.l_root=(f1.t0=this->m__0root.get())->m_Copy(((t_stdlib_collections_Map_1ii_Node*)0));
  }
  return bbGCNew<t_stdlib_collections_Map_1ii>(f0.l_root);
}

bbBool t_stdlib_collections_Map_1ii::m_Contains(bbInt l_key){
  return (this->m_FindNode(l_key)!=((t_stdlib_collections_Map_1ii_Node*)0));
}

void t_stdlib_collections_Map_1ii::m_Clear(){
  this->m__0root=((t_stdlib_collections_Map_1ii_Node*)0);
}

t_stdlib_collections_Map_1ii_Iterator t_stdlib_collections_Map_1ii::m_All(){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  return t_stdlib_collections_Map_1ii_Iterator{f0.t0=this->m_FirstNode()};
}

bbBool t_stdlib_collections_Map_1ii::m_Add(bbInt l_key,bbInt l_value){
  struct f0_t : public bbGCFrame{
    t_stdlib_collections_Map_1ii_Node* l_node{};
    t_stdlib_collections_Map_1ii_Node* l_parent{};
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(l_parent);
    }
  }f0{};
  if(!bbBool(this->m__0root.get())){
    this->m__0root=bbGCNew<t_stdlib_collections_Map_1ii_Node>(l_key,l_value,t_stdlib_collections_Map_1ii_Node_Color(0),((t_stdlib_collections_Map_1ii_Node*)0));
    return true;
  }
  f0.l_node=this->m__0root.get();
  bbInt l_cmp{};
  while(bbBool(f0.l_node)){
    f0.l_parent=f0.l_node;
    l_cmp=bbCompare(l_key,f0.l_node->m__0key);
    if((l_cmp>bbInt(0))){
      f0.l_node=f0.l_node->m__0right.get();
    }else if((l_cmp<bbInt(0))){
      f0.l_node=f0.l_node->m__0left.get();
    }else{
      return false;
    }
  }
  f0.l_node=bbGCNew<t_stdlib_collections_Map_1ii_Node>(l_key,l_value,t_stdlib_collections_Map_1ii_Node_Color(0),f0.l_parent);
  if((l_cmp>bbInt(0))){
    f0.l_parent->m__0right=f0.l_node;
  }else{
    f0.l_parent->m__0left=f0.l_node;
  }
  this->m_InsertFixup(f0.l_node);
  return true;
}

void mx2_sdk_stdlib_collections_2map_init_f(){
}
