Projectile Manager
==================

Manages all projectiles in the game.

Projectile types
----------------
There are currently two types of projectiles in the game: magic bolts and
"normal" projectiles (such as arrows).

Magic bolts are described by a ``MagicBoltState``, aren't affected by gravity,
and can't be created underwater. When a bolt hits a target, a
``MWMechanics::CastSpell`` is created and the effect infliced by calling
``MWMechanics::CastSpell::inflict``.

Normal projectiles are described by a ``ProjectileState``. When moved, they are
affected by gravity, but no aerodynamic simulations are performed. When a
projectile hits a target, ``MWMechanics::projectileHit`` is called.

Updating projectiles
--------------------

Projectiles are updated by calling ``ProjectileManager::update``.
Collision is resolved by casting a ray from the projectile's old positions to
the projectile's new position
