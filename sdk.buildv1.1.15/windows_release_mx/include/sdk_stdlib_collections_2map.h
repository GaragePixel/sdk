
#ifndef MX2_SDK_STDLIB_COLLECTIONS_2MAP_H
#define MX2_SDK_STDLIB_COLLECTIONS_2MAP_H

#include <bbmonkey.h>
#include "stdlib/stdlib.buildv1.1.15/windows_release_mx/include/stdlib_collections_2map.h"

#include "monkey/monkey.buildv1.1.15/windows_release_mx/include/monkey_types.h"

BB_ENUM(t_stdlib_collections_Map_1ii_Node_Color)

BB_CLASS(t_stdlib_collections_Map_1ii_Node)
BB_STRUCT(t_stdlib_collections_Map_1ii_Iterator)
BB_STRUCT(t_stdlib_collections_Map_1ii_KeyIterator)
BB_STRUCT(t_stdlib_collections_Map_1ii_MapKeys)
BB_STRUCT(t_stdlib_collections_Map_1ii_ValueIterator)
BB_STRUCT(t_stdlib_collections_Map_1ii_MapValues)
BB_CLASS(t_stdlib_collections_Map_1ii)

struct t_stdlib_collections_Map_1ii_Node : public bbObject{
  typedef t_stdlib_collections_Map_1ii_Node *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_stdlib_collections_Map_1ii_Node";}

  bbInt m__0key{};
  bbInt m__0value{};
  t_stdlib_collections_Map_1ii_Node_Color m__0color{};
  bbGCVar<t_stdlib_collections_Map_1ii_Node> m__0left{};
  bbGCVar<t_stdlib_collections_Map_1ii_Node> m__0right{};
  bbGCVar<t_stdlib_collections_Map_1ii_Node> m__0parent{};

  void gcMark();

  t_stdlib_collections_Map_1ii_Node(bbInt l_key,bbInt l_value,t_stdlib_collections_Map_1ii_Node_Color l_color,t_stdlib_collections_Map_1ii_Node* l_parent);
  ~t_stdlib_collections_Map_1ii_Node();

  void m_Value(bbInt l_value);

  bbInt m_Value(){
    return this->m__0value;
  }
  t_stdlib_collections_Map_1ii_Node* m_PrevNode();
  t_stdlib_collections_Map_1ii_Node* m_NextNode();

  bbInt m_Key(){
    return this->m__0key;
  }
  bbInt m_Count(bbInt l_n);
  t_stdlib_collections_Map_1ii_Node* m_Copy(t_stdlib_collections_Map_1ii_Node* l_parent);

  t_stdlib_collections_Map_1ii_Node(){
  }
};

struct t_stdlib_collections_Map_1ii_Iterator{
  typedef t_stdlib_collections_Map_1ii_Iterator bb_struct_type;
  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_stdlib_collections_Map_1ii_Iterator";}

  bbGCVar<t_stdlib_collections_Map_1ii_Node> m__0node{};

  t_stdlib_collections_Map_1ii_Iterator(t_stdlib_collections_Map_1ii_Node* l_node);
  ~t_stdlib_collections_Map_1ii_Iterator();

  bbBool m_Valid();
  t_stdlib_collections_Map_1ii_Node* m_Current();
  void m_Bump();
  bbBool m_AtEnd();

  t_stdlib_collections_Map_1ii_Iterator(){
  }

  t_stdlib_collections_Map_1ii_Iterator(bbNullCtor_t){
  }
};

int bbCompare(const t_stdlib_collections_Map_1ii_Iterator&x,const t_stdlib_collections_Map_1ii_Iterator&y);

void bbGCMark(const t_stdlib_collections_Map_1ii_Iterator&);

struct t_stdlib_collections_Map_1ii_KeyIterator{
  typedef t_stdlib_collections_Map_1ii_KeyIterator bb_struct_type;
  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_stdlib_collections_Map_1ii_KeyIterator";}

  bbGCVar<t_stdlib_collections_Map_1ii_Node> m__0node{};

  t_stdlib_collections_Map_1ii_KeyIterator(t_stdlib_collections_Map_1ii_Node* l_node);
  ~t_stdlib_collections_Map_1ii_KeyIterator();

  bbBool m_Valid();
  bbInt m_Current();
  void m_Bump();
  bbBool m_AtEnd();

  t_stdlib_collections_Map_1ii_KeyIterator(){
  }

  t_stdlib_collections_Map_1ii_KeyIterator(bbNullCtor_t){
  }
};

int bbCompare(const t_stdlib_collections_Map_1ii_KeyIterator&x,const t_stdlib_collections_Map_1ii_KeyIterator&y);

void bbGCMark(const t_stdlib_collections_Map_1ii_KeyIterator&);

struct t_stdlib_collections_Map_1ii_MapKeys{
  typedef t_stdlib_collections_Map_1ii_MapKeys bb_struct_type;
  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_stdlib_collections_Map_1ii_MapKeys";}

  bbGCVar<t_stdlib_collections_Map_1ii> m__0map{};

  t_stdlib_collections_Map_1ii_MapKeys(t_stdlib_collections_Map_1ii* l_map);
  ~t_stdlib_collections_Map_1ii_MapKeys();

  t_stdlib_collections_Map_1ii_KeyIterator m_All();

  t_stdlib_collections_Map_1ii_MapKeys(){
  }

  t_stdlib_collections_Map_1ii_MapKeys(bbNullCtor_t){
  }
};

int bbCompare(const t_stdlib_collections_Map_1ii_MapKeys&x,const t_stdlib_collections_Map_1ii_MapKeys&y);

void bbGCMark(const t_stdlib_collections_Map_1ii_MapKeys&);

struct t_stdlib_collections_Map_1ii_ValueIterator{
  typedef t_stdlib_collections_Map_1ii_ValueIterator bb_struct_type;
  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_stdlib_collections_Map_1ii_ValueIterator";}

  bbGCVar<t_stdlib_collections_Map_1ii_Node> m__0node{};

  t_stdlib_collections_Map_1ii_ValueIterator(t_stdlib_collections_Map_1ii_Node* l_node);
  ~t_stdlib_collections_Map_1ii_ValueIterator();

  bbBool m_Valid();
  bbInt m_Current();
  void m_Bump();
  bbBool m_AtEnd();

  t_stdlib_collections_Map_1ii_ValueIterator(){
  }

  t_stdlib_collections_Map_1ii_ValueIterator(bbNullCtor_t){
  }
};

int bbCompare(const t_stdlib_collections_Map_1ii_ValueIterator&x,const t_stdlib_collections_Map_1ii_ValueIterator&y);

void bbGCMark(const t_stdlib_collections_Map_1ii_ValueIterator&);

struct t_stdlib_collections_Map_1ii_MapValues{
  typedef t_stdlib_collections_Map_1ii_MapValues bb_struct_type;
  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_stdlib_collections_Map_1ii_MapValues";}

  bbGCVar<t_stdlib_collections_Map_1ii> m__0map{};

  t_stdlib_collections_Map_1ii_MapValues(t_stdlib_collections_Map_1ii* l_map);
  ~t_stdlib_collections_Map_1ii_MapValues();

  t_stdlib_collections_Map_1ii_ValueIterator m_All();

  t_stdlib_collections_Map_1ii_MapValues(){
  }

  t_stdlib_collections_Map_1ii_MapValues(bbNullCtor_t){
  }
};

int bbCompare(const t_stdlib_collections_Map_1ii_MapValues&x,const t_stdlib_collections_Map_1ii_MapValues&y);

void bbGCMark(const t_stdlib_collections_Map_1ii_MapValues&);

struct t_stdlib_collections_Map_1ii : public bbObject{
  typedef t_stdlib_collections_Map_1ii *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_stdlib_collections_Map_1ii";}

  bbGCVar<t_stdlib_collections_Map_1ii_Node> m__0root{};

  void gcMark();

  t_stdlib_collections_Map_1ii(t_stdlib_collections_Map_1ii_Node* l_root);
  t_stdlib_collections_Map_1ii();
  ~t_stdlib_collections_Map_1ii();

  void m__idxeq(bbInt l_key,bbInt l_value);
  bbInt m__idx(bbInt l_key);
  t_stdlib_collections_Map_1ii_MapValues m_Values();
  bbBool m_Update(bbInt l_key,bbInt l_value);
  bbBool m_Set(bbInt l_key,bbInt l_value);
  void m_RotateRight(t_stdlib_collections_Map_1ii_Node* l_node);
  void m_RotateLeft(t_stdlib_collections_Map_1ii_Node* l_node);
  void m_RemoveNode(t_stdlib_collections_Map_1ii_Node* l_node);
  bbBool m_Remove(bbInt l_key);
  t_stdlib_collections_Map_1ii_Node* m_LastNode();
  t_stdlib_collections_Map_1ii_MapKeys m_Keys();
  void m_InsertFixup(t_stdlib_collections_Map_1ii_Node* l_node);
  bbInt m_Get(bbInt l_key);
  t_stdlib_collections_Map_1ii_Node* m_FirstNode();
  t_stdlib_collections_Map_1ii_Node* m_FindNode(bbInt l_key);
  bbBool m_Empty();
  void m_DeleteFixup(t_stdlib_collections_Map_1ii_Node* l_node,t_stdlib_collections_Map_1ii_Node* l_parent);
  bbInt m_Count();
  t_stdlib_collections_Map_1ii* m_Copy();
  bbBool m_Contains(bbInt l_key);
  void m_Clear();
  t_stdlib_collections_Map_1ii_Iterator m_All();
  bbBool m_Add(bbInt l_key,bbInt l_value);
};

#endif
