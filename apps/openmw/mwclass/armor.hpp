#ifndef GAME_MWCLASS_ARMOR_H
#define GAME_MWCLASS_ARMOR_H

#include "../mwworld/class.hpp"

namespace MWClass
{
    class Armor : public MWWorld::Class
    {
            virtual MWWorld::Ptr
            copyToCellImpl(const MWWorld::Ptr &ptr, MWWorld::CellStore &cell) const;

        public:

            virtual void insertObjectRendering (const MWWorld::Ptr& ptr, MWRender::RenderingInterface& renderingInterface) const;
            ///< Add reference into a cell for rendering

            virtual void insertObject(const MWWorld::Ptr& ptr, MWWorld::PhysicsSystem& physics) const;

            virtual std::string getName (const MWWorld::Ptr& ptr) const;
            ///< \return name (the one that is to be presented to the user; not the internal one);
            /// can return an empty string.

            virtual boost::shared_ptr<MWWorld::Action> activate (const MWWorld::Ptr& ptr,
                const MWWorld::Ptr& actor) const;
            ///< Generate action for activation

            virtual bool hasItemHealth (const MWWorld::Ptr& ptr) const;
            ///< \return Item health data available?

            virtual int getItemMaxHealth (const MWWorld::Ptr& ptr) const;
            ///< Return item max health or throw an exception, if class does not have item health

            virtual std::string getScript (const MWWorld::Ptr& ptr) const;
            ///< Return name of the script attached to ptr

            virtual std::pair<std::vector<int>, bool> getEquipmentSlots (const MWWorld::Ptr& ptr) const;
            ///< \return first: Return IDs of the slot this object can be equipped in; second: can object
            /// stay stacked when equipped?

            virtual int getEquipmentSkill (const MWWorld::Ptr& ptr) const;
            /// Return the index of the skill this item corresponds to when equiopped or -1, if there is
            /// no such skill.

            virtual bool hasToolTip (const MWWorld::Ptr& ptr) const;
            ///< @return true if this object has a tooltip when focused (default implementation: false)

            virtual MWGui::ToolTipInfo getToolTipInfo (const MWWorld::Ptr& ptr) const;
            ///< @return the content of the tool tip to be displayed. raises exception if the object has no tooltip.

            virtual int getValue (const MWWorld::Ptr& ptr) const;
            ///< Return trade value of the object. Throws an exception, if the object can't be traded.

            static void registerSelf();

            virtual std::string getUpSoundId (const MWWorld::Ptr& ptr) const;
            ///< Return the pick up sound Id

            virtual std::string getDownSoundId (const MWWorld::Ptr& ptr) const;
            ///< Return the put down sound Id

            virtual std::string getInventoryIcon (const MWWorld::Ptr& ptr) const;
            ///< Return name of inventory icon.

            virtual std::string getEnchantment (const MWWorld::Ptr& ptr) const;
            ///< @return the enchantment ID if the object is enchanted, otherwise an empty string

            virtual void applyEnchantment(const MWWorld::Ptr &ptr, const std::string& enchId, int enchCharge, const std::string& newName) const;

            virtual int canBeEquipped(const MWWorld::Ptr &ptr, const MWWorld::Ptr &npc) const;
            ///< Return 0 if player cannot equip item. 1 if can equip. 2 if it's twohanded weapon. 3 if twohanded weapon conflicts with that.

            virtual boost::shared_ptr<MWWorld::Action> use (const MWWorld::Ptr& ptr)
                const;
            ///< Generate action for using via inventory menu

            virtual std::string getModel(const MWWorld::Ptr &ptr) const;

            virtual short getEnchantmentPoints (const MWWorld::Ptr& ptr) const;

            virtual bool canSell (const MWWorld::Ptr& item, int npcServices) const;
    };
}

#endif
