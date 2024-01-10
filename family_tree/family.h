#ifndef __FAMILY_H__
#define __FAMILY_H__

/**
 * family_tree - binary tree which contains informations from family members
 *
 * @left: left child
 * @right: right child
 * @parent: parent
 * @gender: string containing "f"(female) or "m"(male)
 * @status: string containing "dead" or "alive"
 * @name: string containing name of the member
 */

typedef struct family_tree_s
{
	struct family_tree_s *left;
	struct family_tree_s *right;
	struct family_tree_s *parent;
	char gender;
	char *status;
	char *name;
} member;

int check_str(char *str, char**allowed, int choiceN);

#endif /* __FAMILY_H__ */
