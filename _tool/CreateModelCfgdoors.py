import bpy

model_name = "Town_Hall_F" #name of the p3d
bones = ""
animations = ""

list_sorted = [obj for obj in bpy.context.selected_objects[0].vertex_groups if ("door_" in obj.name and "glass" not in obj.name and "handle" not in obj.name)]

for obj in list_sorted:
    i = list_sorted.index(obj)
    bones += '            "'+ obj.name + '",    ""'
    if(i < (len(list_sorted)-1)):
        bones += ",\n"
    else:
        bones += "\n"

    if(i == 0):
        animations += "			class " + obj.name + "_rot\n			{\n				type			= rotation;\n				source			= " + obj.name + "_source;\n				selection		= " + obj.name + ";\n				axis			= " + obj.name + "_axis;\n				memory			= 1;\n				minValue		= 0;\n				maxValue		= 1;\n				angle0			= 0;\n				angle1			= -(rad 90);\n			};\n"
    else:
        animations += "			class " + obj.name + "_rot : " + list_sorted[0].name + "_rot {\n				source			= " + obj.name + "_source;\n				selection		= " + obj.name + ";\n				axis			= " + obj.name + "_axis;\n				angle1			= (rad 90);\n			};\n"

template_model_cfg = "class CfgSkeletons\n{\n    class Default\n    {\n        isDiscrete = 1;\n        skeletonInherit = \"\";\n        skeletonBones[] = {};\n    };\n\n    class " + model_name + "_skeleton: Default\n    {\n        skeletonInherit = \"Default\";\n        skeletonBones[] =\n        {\n"+ bones +"\n        };\n    };\n};\n\nclass CfgModels\n{\n    class Default\n    {\n        sectionsInherit = \"\";\n        sections[] = {};\n        skeletonName = \"\";\n    };\n\n    class " + model_name + ": Default\n    {\n        skeletonName = \"" + model_name + "_skeleton\";\n        sections[] =\n        {\n            \"" + model_name + "\"\n        };\n        sectionsInherit = \"\";\n        class Animations\n        {\n\n" + animations + "        };\n    };\n};\n"
bpy.context.window_manager.clipboard = template_model_cfg
